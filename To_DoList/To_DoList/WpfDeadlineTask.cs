using System;
using System.Windows;
using To_DoList;

public class WpfDeadlineTask : IDeadlineTask
{
    public string Title { get; set; }
    public DateTime Deadline { get; set; }

    public void Display()
    {
        MessageBox.Show($"WPF Deadline Task Displayed. Title: {Title}, Deadline: {Deadline}");
    }

    public override string ToString()
    {
        return $"Deadline Task: {Title}, Deadline: {Deadline}";
    }
}
