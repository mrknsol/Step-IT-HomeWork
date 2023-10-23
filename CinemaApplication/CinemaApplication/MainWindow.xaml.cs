//using System;
//using System.Windows;
//using Newtonsoft.Json.Linq;

//namespace ImdbMovieSearch
//{
//    public partial class MainWindow : Window
//    {
//        private readonly ImdbApiHelper imdbApiHelper;

//        public MainWindow()
//        {
//            InitializeComponent();
//            string apiKey = "a429ac";
//            imdbApiHelper = new ImdbApiHelper(apiKey);
//        }



//        private async void OnSearchClick(object sender, RoutedEventArgs e)
//        {
//            string query = txtSearch.Text;
//            if (string.IsNullOrWhiteSpace(query))
//            {
//                MessageBox.Show("Please enter a movie title.");
//                return;
//            }

//            try
//            {
//                JObject searchResult = await imdbApiHelper.SearchMoviesAsync(query);
//                if (searchResult["Search"] != null)
//                {
//                    lvMovies.ItemsSource = searchResult["Search"];
//                }
//                else
//                {
//                    MessageBox.Show("No movies found for the given query.");
//                }
//            }
//            catch (Exception ex)
//            {
//                MessageBox.Show($"An error occurred: {ex.Message}", "Error", MessageBoxButton.OK, MessageBoxImage.Error);
//            }
//        }
//    }
//}using System;
using System;
using System.Collections.Generic;
using System.Net.Http;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Input;
using Newtonsoft.Json.Linq;

namespace ImdbMovieSearch
{
    public partial class MainWindow : Window
    {
        private readonly ImdbApiHelper imdbApiHelper;

        public MainWindow()
        {
            InitializeComponent();
            string apiKey = "694d6009d68c4a93bf4537a4132518bf"; // Замените на свой ключ TMDb
            imdbApiHelper = new ImdbApiHelper(apiKey);

            lvMovies.MouseDoubleClick += OnListViewDoubleClick;
        }

        private async void OnListViewDoubleClick(object sender, MouseButtonEventArgs e)
        {
            if (lvMovies.SelectedItem != null)
            {
                Movie selectedMovie = (Movie)lvMovies.SelectedItem;
                string imdbId = await imdbApiHelper.GetImdbIdFromTMDbApi(selectedMovie.Title);

                if (!string.IsNullOrWhiteSpace(imdbId))
                {
                    System.Diagnostics.Process.Start(new System.Diagnostics.ProcessStartInfo
                    {
                        FileName = $"https://www.themoviedb.org/movie/{imdbId}",
                        UseShellExecute = true
                    });
                }
                else
                {
                    MessageBox.Show("No TMDb link available for the selected movie.");
                }
            }
        }

        private async void OnSearchClick(object sender, RoutedEventArgs e)
        {
            string query = txtSearch.Text;
            if (string.IsNullOrWhiteSpace(query))
            {
                MessageBox.Show("Please enter a movie title.");
                return;
            }

            try
            {
                List<Movie> searchResult = await imdbApiHelper.SearchMoviesAsync(query);
                if (searchResult != null)
                {
                    lvMovies.ItemsSource = searchResult;
                }
                else
                {
                    MessageBox.Show("No movies found for the given query.");
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"An error occurred: {ex.Message}", "Error", MessageBoxButton.OK, MessageBoxImage.Error);
            }
        }
    }
}
