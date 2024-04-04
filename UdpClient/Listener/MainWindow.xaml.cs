using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;

namespace Listener
{
    /// <summary>
    /// Interaction logic for ListenerWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private UdpClient udpClient;

        public MainWindow()
        {
            InitializeComponent();
            udpClient = new UdpClient(12345);

            udpClient.Client.SendBufferSize = 655360; 
            udpClient.Client.ReceiveBufferSize = 655360;
        }

        private async void ListenButton_Click(object sender, RoutedEventArgs e)
        {
            try
            {
                UdpReceiveResult result = await udpClient.ReceiveAsync();
                byte[] receivedData = result.Buffer;
                string desktopPath = Environment.GetFolderPath(Environment.SpecialFolder.Desktop);
                string musicFolderPath = Path.Combine(desktopPath, "Music");
                string filePath = Path.Combine(musicFolderPath, "receivedFile.mp3");
                using (FileStream fs = File.Create(filePath))
                {
                    await fs.WriteAsync(receivedData, 0, receivedData.Length);
                }
                ReceivedFileNameLabel.Content = Path.GetFileName(filePath);
                MessageBox.Show("File received and saved successfully!");
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Error: {ex.Message}");
            }
        }
    }
}
