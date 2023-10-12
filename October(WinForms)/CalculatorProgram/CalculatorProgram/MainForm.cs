//using System;
//using System.Collections.Generic;
//using System.ComponentModel;
//using System.Data;
//using System.Drawing;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;
//using System.Windows.Forms;
//using static System.Windows.Forms.VisualStyles.VisualStyleElement;


//namespace CalculatorProgram
//{
//    public partial class MainForm : Form
//    {
//        private double numBeforeOperator;
//        private double numAfterOperator;
//        private char currentOperator;
//        private double result;
//        private double intermediateResult;

//        public MainForm()
//        {
//            InitializeComponent();
//        }



//        private void button0_Click(object sender, EventArgs e)
//        {
//            textBox1.Text += "0";
//        }

//        private void button1_Click(object sender, EventArgs e)
//        {
//            textBox1.Text += "1";
//        }

//        private void button2_Click(object sender, EventArgs e)
//        {
//            textBox1.Text += "2";
//        }

//        private void button3_Click(object sender, EventArgs e)
//        {
//            textBox1.Text += "3";
//        }

//        private void button4_Click(object sender, EventArgs e)
//        {
//            textBox1.Text += "4";
//        }

//        private void button5_Click(object sender, EventArgs e)
//        {
//            textBox1.Text += "5";
//        }

//        private void button6_Click(object sender, EventArgs e)
//        {
//            textBox1.Text += "6";
//        }

//        private void button7_Click(object sender, EventArgs e)
//        {
//            textBox1.Text += "7";
//        }

//        private void button8_Click(object sender, EventArgs e)
//        {
//            textBox1.Text += "8";
//        }

//        private void button9_Click(object sender, EventArgs e)
//        {
//            textBox1.Text += "9";
//        }

//        private void buttonDelete_Click(object sender, EventArgs e)
//        {
//            if (!string.IsNullOrEmpty(textBox1.Text))
//            {
//                textBox1.Text = textBox1.Text.Substring(0, textBox1.Text.Length - 1);
//            }
//        }
//        private void buttonDot_Click(object sender, EventArgs e)
//        {
//            textBox1.Text += ".";
//        }

//        private void buttonClear_Click(object sender, EventArgs e)
//        {
//            textBox1.Clear();
//        }

//        private void buttonNegative_Click(object sender, EventArgs e)
//        {
//            if (!string.IsNullOrEmpty(textBox1.Text))
//            {
//                double value = double.Parse(textBox1.Text);
//                value = -value;
//                textBox1.Text = value.ToString();
//            }
//        }

//        private void buttonProcent_Click(object sender, EventArgs e)
//        {
//            if (!string.IsNullOrEmpty(textBox1.Text))
//            {
//                double value = double.Parse(textBox1.Text);
//                value /= 100;
//                textBox1.Text = value.ToString();
//            }
//        }
//        private void buttonPlus_Click(object sender, EventArgs e)
//        {
//            PerformOperation();
//            numBeforeOperator = double.Parse(textBox1.Text);
//            currentOperator = '+';
//            textBox1.Clear();
//        }

//        private void buttonMinus_Click(object sender, EventArgs e)
//        {
//            PerformOperation();
//            numBeforeOperator = double.Parse(textBox1.Text);
//            currentOperator = '-';
//            textBox1.Clear();
//        }

//        private void buttonMultiple_Click(object sender, EventArgs e)
//        {
//            PerformOperation();
//            numBeforeOperator = double.Parse(textBox1.Text);
//            currentOperator = '*';
//            textBox1.Clear();
//        }

//        private void buttonDivide_Click(object sender, EventArgs e)
//        {
//            PerformOperation();
//            numBeforeOperator = double.Parse(textBox1.Text);
//            currentOperator = '/';
//            textBox1.Clear();
//        }

//        private void ButtonEqual_Click(object sender, EventArgs e)
//        {
//            PerformOperation();
//            numBeforeOperator = 0;
//            numAfterOperator = 0;
//        }

//        private void PerformOperation()
//        {
//            if (!string.IsNullOrEmpty(textBox1.Text))
//            {
//                numAfterOperator = double.Parse(textBox1.Text);

//                switch (currentOperator)
//                {
//                    case '+':
//                        result = numBeforeOperator + numAfterOperator;
//                        break;
//                    case '-':
//                        result = numBeforeOperator - numAfterOperator;
//                        break;
//                    case '*':
//                        result = numBeforeOperator * numAfterOperator;
//                        break;
//                    case '/':
//                        if (numAfterOperator != 0)
//                        {
//                            result = numBeforeOperator / numAfterOperator;
//                        }
//                        else
//                            MessageBox.Show("You cant't divide by 0!");
//                        break;
//                    default:
//                        result = numAfterOperator;
//                        break;
//                }

//                textBox1.Text = result.ToString();
//                currentOperator = '\0';
//            }
//        }
//    }
//}

using System;
using System.Collections.Generic;
using System.Text;
using System.Windows.Forms;

namespace CalculatorProgram
{
    public partial class MainForm : Form
    {
        private List<double> numbers = new List<double>();
        private List<char> operators = new List<char>();
        private double result;
        private bool commandClicked = false;

        public MainForm()
        {
            InitializeComponent();
            this.FormBorderStyle = FormBorderStyle.FixedSingle;
        }

        private void ChangingColor()
        {
            buttonPlus.BackColor = Color.FromArgb(255, 128, 0);
            buttonPlus.ForeColor = Color.Black;
            buttonMinus.BackColor = Color.FromArgb(255, 128, 0);
            buttonMinus.ForeColor = Color.Black;
            buttonMultiple.BackColor = Color.FromArgb(255, 128, 0);
            buttonMultiple.ForeColor = Color.Black;
            buttonDivide.BackColor = Color.FromArgb(255, 128, 0);
            buttonDivide.ForeColor = Color.Black;
        }


        private void button0_Click(object sender, EventArgs e)
        {
            ChangingColor();
            textBox1.Text += "0";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            ChangingColor();
            textBox1.Text += "1";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            ChangingColor();
            textBox1.Text += "2";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            ChangingColor();
            textBox1.Text += "3";
        }

        private void button4_Click(object sender, EventArgs e)
        {
            ChangingColor();
            textBox1.Text += "4";
        }

        private void button5_Click(object sender, EventArgs e)
        {
            ChangingColor();
            textBox1.Text += "5";
        }

        private void button6_Click(object sender, EventArgs e)
        {
            ChangingColor();
            textBox1.Text += "6";
        }

        private void button7_Click(object sender, EventArgs e)
        {
            ChangingColor();
            textBox1.Text += "7";
        }

        private void button8_Click(object sender, EventArgs e)
        {
            ChangingColor();
            textBox1.Text += "8";
        }

        private void button9_Click(object sender, EventArgs e)
        {
            ChangingColor();
            textBox1.Text += "9";
        }

        private void buttonDelete_Click(object sender, EventArgs e)
        {
            if (!string.IsNullOrEmpty(textBox1.Text))
            {
                textBox1.Text = textBox1.Text.Substring(0, textBox1.Text.Length - 1);
            }
        }
        private void buttonDot_Click(object sender, EventArgs e)
        {
            if (!commandClicked)
            {
                textBox1.Text += ",";
                commandClicked = true;
            }
        }

        private void buttonNegative_Click(object sender, EventArgs e)
        {
            double value = -(double.Parse(textBox1.Text));
            textBox1.Text = value.ToString();
        }

        private void buttonProcent_Click(object sender, EventArgs e)
        {
            if (!string.IsNullOrEmpty(textBox1.Text))
            {
                double value = double.Parse(textBox1.Text);
                value /= 100;
                textBox1.Text = value.ToString();
            }
        }

        private void buttonClear_Click(object sender, EventArgs e)
        {
            ChangingColor();
            numbers.Clear();
            operators.Clear();
            textBox1.Clear();
        }

        private void buttonPlus_Click(object sender, EventArgs e)
        {
            buttonPlus.BackColor = Color.White;
            buttonPlus.ForeColor = Color.Black;
            HandleOperator('+');
        }

        private void buttonMinus_Click(object sender, EventArgs e)
        {
            buttonMinus.BackColor = Color.White;
            buttonMinus.ForeColor = Color.Black;
            HandleOperator('-');
        }

        private void buttonMultiple_Click(object sender, EventArgs e)
        {
            buttonMultiple.BackColor = Color.White;
            buttonMultiple.ForeColor = Color.Black;
            HandleOperator('*');
        }

        private void buttonDivide_Click(object sender, EventArgs e)
        {
            buttonDivide.BackColor = Color.White;
            buttonDivide.ForeColor = Color.Black;
            HandleOperator('/');
        }

        private void ButtonEqual_Click(object sender, EventArgs e)
        {
            PerformOperation();
        }

        private void HandleOperator(char op)
        {
            if (!string.IsNullOrEmpty(textBox1.Text))
            {
                double value = double.Parse(textBox1.Text);
                numbers.Add(value);
                operators.Add(op);
                textBox1.Clear();
            }
        }

        private void PerformOperation()
        {
            if (!string.IsNullOrEmpty(textBox1.Text))
            {
                double value = double.Parse(textBox1.Text);
                numbers.Add(value);
            }

            for (int i = 0; i < operators.Count; i++)
            {
                if (operators[i] == '*' || operators[i] == '/')
                {
                    double num1 = numbers[i];
                    double num2 = numbers[i + 1];

                    switch (operators[i])
                    {
                        case '*':
                            numbers[i] = num1 * num2;
                            break;
                        case '/':
                            if (num2 != 0)
                                numbers[i] = num1 / num2;
                            else
                            {
                                MessageBox.Show("You can't divide by 0!");
                                return;
                            }
                            break;
                    }

                    numbers.RemoveAt(i + 1);
                    operators.RemoveAt(i);
                    i--;
                }
            }

            result = numbers[0];
            for (int i = 0; i < operators.Count; i++)
            {
                double nextNumber = numbers[i + 1];

                switch (operators[i])
                {
                    case '+':
                        result += nextNumber;
                        break;
                    case '-':
                        result -= nextNumber;
                        break;
                }
            }

            textBox1.Text = result.ToString();
            numbers.Clear();
            operators.Clear();
        }
    }
}


