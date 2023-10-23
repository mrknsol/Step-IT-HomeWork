
using Newtonsoft.Json;
using System;
using System.Collections.ObjectModel;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using System.Windows;
using System.Windows.Controls;

namespace LoginRegistration
{
    public partial class Registration : Window
    {
        private static ObservableCollection<User> users;

        public Registration()
        {
            InitializeComponent();
            if (users == null)
            {
                LoadUsersFromJson();
            }

            passwordTextBox.PasswordChar = '*';
        }

        private void LoadUsersFromJson()
        {
            try
            {
                string json = File.ReadAllText("users.json");
                users = JsonConvert.DeserializeObject<ObservableCollection<User>>(json) ?? new ObservableCollection<User>();
            }
            catch (FileNotFoundException)
            {
                users = new ObservableCollection<User>();
            }
        }

        private void SaveUsersButton_Click(object sender, RoutedEventArgs e)
        {
            string username = loginTextBox.Text;
            string password = passwordTextBox.Password;
            string email = EmailTextBox.Text;

            string validationMessage = ValidateInput(username, password, email);

            if (string.IsNullOrEmpty(validationMessage))
            {
                if (IsInputValid(username, password, email))
                {
                    if (users.Any(u => u.Username == username))
                    {
                        MessageBox.Show("A user with this login already exists.");
                        loginTextBox.Clear();
                        return;
                    }

                    if (users.Any(u => u.Email == email))
                    {
                        MessageBox.Show("A user with this email already exists.");
                        EmailTextBox.Clear();
                        return;
                    }

                    User newUser = new User
                    {
                        Username = username,
                        Password = password,
                        Email = email
                    };

                    users.Add(newUser);

                    SaveUsersToJson(users);

                    loginTextBox.Clear();
                    passwordTextBox.Clear();
                    EmailTextBox.Clear();

                    MessageBox.Show("Registration successfully completed.");
                    MainWindow mainWindow = new MainWindow();
                    mainWindow.Show();
                    this.Close();
                }
            }
            
        }

        public class User
        {
            public string Username { get; set; }
            public string Password { get; set; }
            public string Email { get; set; }
        }

        private string ValidateInput(string username, string password, string email)
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
                passwordTextBox.Clear();
            }

            if (!IsEmailValid(email))
            {
                MessageBox.Show("Please enter a valid email address.");
                EmailTextBox.Clear();
            }

            return null;
        }

        private bool IsInputValid(string login, string password, string email)
        {
            return IsUsernameValid(login) && IsPasswordValid(password) && IsEmailValid(email);
        }


        private bool IsUsernameValid(string username)
        {
            return !Regex.IsMatch(username, @"[^a-zA-Z0-9_]");
        }

        private bool IsPasswordValid(string password)
        {
            return Regex.IsMatch(password, @"^[a-zA-Z0-9.]{8,}$");
        }

        private bool IsEmailValid(string email)
        {
            return Regex.IsMatch(email, @"^\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*$");
        }

        private void SaveUsersToJson(ObservableCollection<User> users)
        {
            string json = JsonConvert.SerializeObject(users, Formatting.Indented);

            File.WriteAllText("users.json", json);
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            MainWindow loginWindow = new MainWindow();
            loginWindow.Show();

            this.Close();
        }
    }
}
