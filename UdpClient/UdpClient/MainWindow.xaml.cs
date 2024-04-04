using Microsoft.Win32;
using System;
using System.IO;
using System.Net;
using System.Net.Sockets;
using System.Threading.Tasks;
using System.Windows;

namespace UdpClientWork
{
    public partial class MainWindow : Window
    {
        private UdpClient udpClient;
        private string selectedFilePath;
        private const int chunkSize = 1024;

        public MainWindow()
        {
            InitializeComponent();
            udpClient = new UdpClient();
            udpClient.Client.SendBufferSize = 655360; 
        }

        private void BrowseButton_Click(object sender, RoutedEventArgs e)
        {
            OpenFileDialog openFileDialog = new OpenFileDialog();
            openFileDialog.Filter = "MP3 files (*.mp3)|*.mp3";
            if (openFileDialog.ShowDialog() == true)
            {
                selectedFilePath = openFileDialog.FileName;
                SelectedFileLabel.Content = Path.GetFileName(selectedFilePath);
            }
        }

        private async void SendButton_Click(object sender, RoutedEventArgs e)
        {
            if (string.IsNullOrEmpty(selectedFilePath))
            {
                MessageBox.Show("Please select a file first.");
                return;
            }

            try
            {
                using (FileStream fs = File.OpenRead(selectedFilePath))
                {
                    long fileSize = fs.Length;
                    int totalChunks = (int)Math.Ceiling((double)fileSize / chunkSize);
                    for (int i = 0; i < totalChunks; i++)
                    {
                        byte[] buffer = new byte[chunkSize];
                        int bytesRead = await fs.ReadAsync(buffer, 0, buffer.Length);
                        await udpClient.SendAsync(buffer, bytesRead, "127.0.0.1", 12345);
                    }

                    MessageBox.Show("File sent successfully!");
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Error: {ex.Message}");
            }
        }
    }
}
