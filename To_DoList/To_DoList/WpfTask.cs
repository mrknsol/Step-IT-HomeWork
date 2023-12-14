using System.Windows;
using To_DoList;

public class WpfTask : ITask
{
    public string Title { get; set; }

    public void Display()
    {
        MessageBox.Show($"WPF Task Displayed. Title: {Title}");
    }

    public override string ToString()
    {
        return $"Task: {Title}";
    }
}
