using System.Numerics;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Xml;
using static System.Net.Mime.MediaTypeNames;

namespace _20
{
    public partial class MainWindow : Window
    {
        private ManualResetEvent[] events = new ManualResetEvent[2];

        public MainWindow()
        {
            events[0] = new ManualResetEvent(true);
            events[1] = new ManualResetEvent(true);
            InitializeComponent();
        }

        private void StartNums(object sender, RoutedEventArgs e)
        {
            Numbers.Text = "";

            string[] numbers = new string[2];

            FirstNum.Text.Split(' ').ToList().ForEach(firstNum => numbers[0] += firstNum);
            SecondNum.Text.Split(' ').ToList().ForEach(secondNum => numbers[1] += secondNum);

            int.TryParse(numbers[0], out int firstNumber);
            int.TryParse(numbers[1], out int secondNumber);

            Task.Run(() =>
            {
                GeneratePrimeNumbers(firstNumber, secondNumber);
            });
        }

        private void StopNums(object sender, RoutedEventArgs e)
        {
            events[0].Reset();
        }

        private void ResumeNums(object sender, RoutedEventArgs e)
        {
            events[0].Set();
        }

        private void StopFibo(object sender, RoutedEventArgs e)
        {
            events[1].Reset();
        }

        private void ResumeFibo(object sender, RoutedEventArgs e)
        {
            events[1].Set();
        }

        private void StartFibonacci(object sender, RoutedEventArgs e)
        {
            Task.Run(() =>
            {
                BigInteger a = 0, b = 1, c;
                System.Windows.Application.Current.Dispatcher.Invoke(() =>
                {
                    Fibonacci.Text += $"{a} {b} ";
                });

                while (true)
                {
                    events[1].WaitOne();
                    Thread.Sleep(500);
                    c = a + b;

                    System.Windows.Application.Current.Dispatcher.Invoke(() =>
                    {
                        Fibonacci.Text += $" {c} |";
                    });

                    a = b;
                    b = c;
                }
            });
        }

        private void GeneratePrimeNumbers(int firstNumber, int secondNumber)
        {
            if (firstNumber > secondNumber && secondNumber != 0)
            {
                int num = firstNumber;
                firstNumber = secondNumber;
                secondNumber = num;
            }

            if (firstNumber == 0)
                firstNumber = 2;

            if (secondNumber == 0)
            {
                while (true)
                {
                    events[0].WaitOne();
                    Thread.Sleep(100);
                    if (IsPrime(firstNumber))
                    {
                        System.Windows.Application.Current.Dispatcher.Invoke(() =>
                        {
                            Numbers.Text += $"{firstNumber} ";
                        });
                    }

                    firstNumber++;
                }
            }
            else
            {
                for (int i = firstNumber; i <= secondNumber; i++)
                {
                    events[0].WaitOne();
                    Thread.Sleep(100);
                    if (IsPrime(i))
                    {
                        System.Windows.Application.Current.Dispatcher.Invoke(() =>
                        {
                            Numbers.Text += $"{i} ";
                        });
                    }
                }
            }
        }

        private bool IsPrime(int number)
        {
            if (number <= 1)
                return false;

            for (int i = 2; i < number; i++)
            {
                if (number % i == 0)
                    return false;
            }

            return true;
        }

        private void Close(object sender, RoutedEventArgs e)
        {
            App.Current.Shutdown();
        }

        private void DragWindow(object sender, MouseButtonEventArgs e)
        {
            if (e.LeftButton == MouseButtonState.Pressed)
            {
                DragMove();
            }
        }

        private void TextBox_PreviewTextInput(object sender, TextCompositionEventArgs e)
        {
            TextBox textBox = (TextBox)sender;

            foreach (char c in e.Text)
            {
                if (!char.IsDigit(c))
                {
                    e.Handled = true;
                    return;
                }
            }
        }
    }
}