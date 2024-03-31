using System;
using System.Net.Http;
using System.Threading.Tasks;
using Newtonsoft.Json;

namespace ApiProject
{
    public class OpenLibraryAPI : IOpenLibraryAPI
    {
        private readonly HttpClient _httpClient;

        public OpenLibraryAPI(HttpClient httpClient)
        {
            _httpClient = httpClient ?? throw new ArgumentNullException(nameof(httpClient));
        }

        public async Task<BookModel> GetBookInfo(string bookId)
        {
            HttpResponseMessage response = await _httpClient.GetAsync($"https://openlibrary.org/api/books/{bookId}.json");
            response.EnsureSuccessStatusCode();
            string jsonResponse = await response.Content.ReadAsStringAsync();
            dynamic data = JsonConvert.DeserializeObject(jsonResponse);

            var bookModel = new BookModel
            {
                Title = data.title,
                Author = data.authors[0].name,
                Genre = "", 
                Year = data.publish_date != null ? Convert.ToInt32(data.publish_date.Split(' ')[2]) : 0
            };

            return bookModel;
        }
    }
}
