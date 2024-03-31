using System;
using System.Net.Http;
using System.Threading.Tasks;
using Newtonsoft.Json.Linq;

namespace ApiProject
{
    public class GoogleBooksAPI : IGoogleBooksAPI
    {
        private readonly HttpClient _httpClient;

        public GoogleBooksAPI(HttpClient httpClient)
        {
            _httpClient = httpClient ?? throw new ArgumentNullException(nameof(httpClient));
        }

        public async Task<BookModel> SearchBook(string query)
        {
            HttpResponseMessage response = await _httpClient.GetAsync($"https://www.googleapis.com/books/v1/volumes?q={query}");
            response.EnsureSuccessStatusCode();
            string jsonResponse = await response.Content.ReadAsStringAsync();
            dynamic data = JObject.Parse(jsonResponse);

            var bookModel = new BookModel();
            if (data.totalItems > 0)
            {
                var volumeInfo = data.items[0].volumeInfo;
                bookModel.Title = volumeInfo.title;
                bookModel.Author = string.Join(", ", volumeInfo.authors);
                bookModel.Genre = ""; 
                bookModel.Year = volumeInfo.publishedDate != null ? GetPublishedYear(volumeInfo.publishedDate.ToString()) : 0;
            }

            return bookModel;
        }

        private int GetPublishedYear(string publishedDate)
        {
            int year = 0;
            string[] dateParts = publishedDate.Split('-');
            if (dateParts.Length > 0 && int.TryParse(dateParts[0], out int parsedYear))
            {
                year = parsedYear;
            }
            return year;
        }
    }
}
