using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.IO;
using System.Linq;
using System.Windows;
using System.Text.RegularExpressions;
using static LoginRegistration.Registration;

namespace LoginRegistration
{
    public partial class MainWindow : Window
    {
        private List<User> users;

        public MainWindow()
        {
            InitializeComponent();
            users = LoadUsersFromJson();
        }

        private List<User> LoadUsersFromJson()
        {
            try
            {
                string json = File.ReadAllText("users.json");
                return JsonConvert.DeserializeObject<List<User>>(json) ?? new List<User>();
            }
            catch (FileNotFoundException)
            {
                return new List<User>();
            }
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            string login = loginTextBox.Text;
            string password = passwordBox.Password;

            string validationMessage = ValidateInput(login, password);

            if (string.IsNullOrEmpty(validationMessage))
            {
                if (IsInputValid(login, password))
                {
                    if (IsLoginValid(login, password))
                    {
                        MessageBox.Show("Welcome, " + login + "!");
                    }
                    else
                    {
                        MessageBox.Show("Wrong login or password.");
                        passwordBox.Clear();
                    }
                }
                else
                {
                    MessageBox.Show("Please enter correct information.");
                }
            }

            
        }

        private bool IsInputValid(string login, string password)
        {
            return IsUsernameValid(login) && IsPasswordValid(password);
        }

        private bool IsLoginValid(string login, string password)
        {
            return users.Any(user => user.Username == login && user.Password == password);
        }

        private void registrationButton_Click(object sender, RoutedEventArgs e)
        {
            Registration registrationWindow = new Registration();
            registrationWindow.Show();
            Close();
        }

        private void Hyperlink_Click(object sender, RoutedEventArgs e)
        {
            
            EmailVerification emailVerification = new EmailVerification();
            emailVerification.Show();
            Close();
        }
        private string ValidateInput(string username, string password)
        {
            if (string.IsNullOrWhiteSpace(username) || string.IsNullOrWhiteSpace(password))
            {
                MessageBox.Show("Please fill out all fields.");
            }

            if (!IsUsernameValid(username))
            {
                MessageBox.Show("The login can only contain letters, numbers and underscores.");
                loginTextBox.Clear();
            }

            if (!IsPasswordValid(password))
            {
                MessageBox.Show("The password must contain at least 8 characters.");
                passwordBox.Clear();
            }

            return null;
        }

        private bool IsUsernameValid(string username)
        {
            return !Regex.IsMatch(username, @"[^a-zA-Z0-9_]");
        }

        private bool IsPasswordValid(string password)
        {
            return Regex.IsMatch(password, @"^[a-zA-Z0-9.]{8,}$");
        }
    }
}
