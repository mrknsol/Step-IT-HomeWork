using System;
using System.Collections.ObjectModel;
using System.Windows;

namespace To_DoList
{
    public partial class MainWindow : Window
    {
        private ObservableCollection<ITask> tasks;

        public MainWindow()
        {
            InitializeComponent();
            tasks = new ObservableCollection<ITask>();
            TaskListBox.ItemsSource = tasks;
        }

        private void CreateTaskButton_Click(object sender, RoutedEventArgs e)
        {
            ITaskManagerFactory factory = new WpfTaskManagerFactory();
            ITask task = factory.CreateTask();
            task.Title = TaskInputBox.Text;
            tasks.Add(task);
            task.Display();
            ResetInputFields();
        }

        private void CreateDeadlineTaskButton_Click(object sender, RoutedEventArgs e)
        {
            ShowDeadlinePanel();
        }

        private void SetDeadlineButton_Click(object sender, RoutedEventArgs e)
        {
            // Показываем панель выбора дедлайна
            ShowDeadlinePanel();
        }

        private void CreateDeadlineTaskConfirmedButton_Click(object sender, RoutedEventArgs e)
        {
            ITaskManagerFactory factory = new WpfTaskManagerFactory();
            IDeadlineTask deadlineTask = factory.CreateDeadlineTask();
            deadlineTask.Title = TaskInputBox.Text;

            // Проверяем, что дата выбрана
            if (DeadlineDatePicker.SelectedDate.HasValue)
            {
                deadlineTask.Deadline = DeadlineDatePicker.SelectedDate.Value;
                tasks.Add(deadlineTask);
                deadlineTask.Display();
                ResetInputFields();
            }
            else
            {
                MessageBox.Show("Please select a deadline date.");
            }
        }

        private void ShowDeadlinePanel()
        {
            DeadlinePanel.Visibility = Visibility.Visible;
        }

        private void ResetInputFields()
        {
            TaskInputBox.Text = string.Empty;
            DeadlinePanel.Visibility = Visibility.Collapsed;
            DeadlineDatePicker.SelectedDate = null;
        }
    }
}
