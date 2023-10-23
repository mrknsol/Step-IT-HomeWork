using System;
using System.Windows;
using System.Net;
using System.Net.Mail;

namespace LoginRegistration
{
    public partial class EmailVerification : Window
    {
        private string verificationCode;
        public string EmailToReset { get; private set; }

        public EmailVerification()
        {
            InitializeComponent();
            GenerateVerificationCode();
        }

        private void GenerateVerificationCode()
        {
            Random random = new Random();
            verificationCode = random.Next(100000, 999999).ToString();
        }

        private void SendVerificationCode_Click(object sender, RoutedEventArgs e)
        {
            string recipientEmail = emailTextBox.Text;

            if (string.IsNullOrWhiteSpace(recipientEmail) || !recipientEmail.Contains("@"))
            {
                MessageBox.Show("Invalid email address.", "Error", MessageBoxButton.OK, MessageBoxImage.Error);
                return;
            }

            string subject = "Verification Code";
            string body = "Your verification code is: " + verificationCode;

            string smtpServer = "smtp.gmail.com";
            int smtpPort = 587;
            string smtpUsername = "kenanmemmedli055@gmail.com";
            string smtpPassword = "kyzzvqbmlbdndgrh";

            SmtpClient client = new SmtpClient(smtpServer, smtpPort);
            client.Credentials = new NetworkCredential(smtpUsername, smtpPassword);
            client.EnableSsl = true;

            MailMessage mail = new MailMessage(smtpUsername, recipientEmail, subject, body);

            try
            {
                client.Send(mail);
                MessageBox.Show("Verification code has been sent to your email.", "Success", MessageBoxButton.OK, MessageBoxImage.Information);
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error sending verification code: " + ex.Message, "Error", MessageBoxButton.OK, MessageBoxImage.Error);
            }
        }

        private void VerifyCode_Click(object sender, RoutedEventArgs e)
        {
            string enteredCode = enteredCodeTxtBox.Text;

            if (enteredCode == verificationCode)
            {
                EmailToReset = emailTextBox.Text;

                ForgotPasswordWindow forgotPasswordWindow = new ForgotPasswordWindow(this); 
                forgotPasswordWindow.Show();
                this.Close();
            }
            else
            {
                MessageBox.Show("Incorrect verification code. Please try again.", "Error", MessageBoxButton.OK, MessageBoxImage.Error);
            }
        }

        private void BackBtn_Click(object sender, RoutedEventArgs e)
        {
            MainWindow mainWindow = new MainWindow();
            mainWindow.Show();
            this.Close();
        }
    }
}

