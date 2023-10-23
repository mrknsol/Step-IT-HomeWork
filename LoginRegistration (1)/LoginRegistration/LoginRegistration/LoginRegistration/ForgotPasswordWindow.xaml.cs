

using Newtonsoft.Json;
using System;
using System.Collections.ObjectModel;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using System.Windows;
using static LoginRegistration.Registration;

namespace LoginRegistration
{
    public partial class ForgotPasswordWindow : Window
    {
        private ObservableCollection<User> users;
        private EmailVerification emailVerification;

        public ForgotPasswordWindow(EmailVerification emailVerification)
        {
            InitializeComponent();
            this.emailVerification = emailVerification;

            users = LoadUsersFromJson();
        }


        private ObservableCollection<User> LoadUsersFromJson()
        {
            try
            {
                string json = File.ReadAllText("users.json");
                return JsonConvert.DeserializeObject<ObservableCollection<User>>(json) ?? new ObservableCollection<User>();
            }
            catch (FileNotFoundException)
            {
                return new ObservableCollection<User>();
            }
        }

        private void ResetPasswordButton_Click(object sender, RoutedEventArgs e)
        {
            string newPassword = passwordTextBox.Password;
            string confirmNewPassword = confirmPasswordTextBox.Password;

            string validationMessage = ValidateInput(newPassword, confirmNewPassword);

            if (IsInputValid(newPassword))
            {
                if (string.IsNullOrEmpty(validationMessage))
                {
                    if (string.IsNullOrWhiteSpace(newPassword) || string.IsNullOrWhiteSpace(confirmNewPassword))
                    {
                        MessageBox.Show("Please enter a new password and confirm it.");
                        return;
                    }

                    if (newPassword != confirmNewPassword)
                    {
                        MessageBox.Show("Passwords do not match. Please enter and confirm your password.");
                        confirmPasswordTextBox.Clear();
                        return;
                    }

                    User userToReset = users.FirstOrDefault(user => user.Email == emailVerification.EmailToReset);

                    if (userToReset != null)
                    {
                        userToReset.Password = newPassword;

                        SaveUsersToJson(users);

                        MessageBox.Show("Password has been successfully updated.");

                        MainWindow mainWindow = new MainWindow();
                        mainWindow.Show();
                        this.Close();
                    }
                }
            }
        }

        private bool IsInputValid(string password)
        {
            return IsPasswordValid(password);
        }

        private string ValidateInput(string password, string confirmNewPassword)
        {
            if (string.IsNullOrWhiteSpace(password) || string.IsNullOrWhiteSpace(confirmNewPassword))
            {
                MessageBox.Show("Please fill in all fields.");
            }

            if (!IsPasswordValid(password))
            {
                MessageBox.Show("Password must be at least 8 characters.");
                passwordTextBox.Clear();
                confirmPasswordTextBox.Clear();
            }

            return null;
        }

        private bool IsPasswordValid(string password)
        {
            return Regex.IsMatch(password, @"^[a-zA-Z0-9.]{8,}$");
        }

        private void SaveUsersToJson(ObservableCollection<User> users)
        {
            string json = JsonConvert.SerializeObject(users, Formatting.Indented);
            File.WriteAllText("users.json", json);
        }

        private void BackToLoginPageButton_Click(object sender, RoutedEventArgs e)
        {
            MainWindow loginWindow = new MainWindow();
            loginWindow.Show();

            this.Close();
        }
    }
}
