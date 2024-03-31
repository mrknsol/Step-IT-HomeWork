using System;
using System.Linq;
using System.Net.Http;
using System.Threading.Tasks;
using System.Xml.Linq;
using Newtonsoft.Json;

namespace ApiProject
{
    public class GoodreadsAPI : IGoodreadsAPI
    {
        private readonly HttpClient _httpClient;
        private const string GoodreadsApiKey = "176865847";

        public GoodreadsAPI(HttpClient httpClient)
        {
            _httpClient = httpClient ?? throw new ArgumentNullException(nameof(httpClient));
        }

        public async Task<string> SearchBook(string bookTitle)
        {
            HttpResponseMessage response = await _httpClient.GetAsync($"https://www.goodreads.com/search/index.xml?key={GoodreadsApiKey}&q={Uri.EscapeDataString(bookTitle)}");
            response.EnsureSuccessStatusCode();
            string xmlResponse = await response.Content.ReadAsStringAsync();

            var document = XDocument.Parse(xmlResponse);
            var firstBookId = document.Descendants("work").FirstOrDefault()?.Element("best_book")?.Element("id")?.Value;

            return firstBookId;
        }

        public async Task<ReviewModel> GetBookReviews(string bookId)
        {
            HttpResponseMessage response = await _httpClient.GetAsync($"https://www.goodreads.com/book/show/{bookId}.json?key={GoodreadsApiKey}");
            response.EnsureSuccessStatusCode();
            string jsonResponse = await response.Content.ReadAsStringAsync();
            dynamic data = JsonConvert.DeserializeObject(jsonResponse);

            var reviewModel = new ReviewModel();
            if (data.book.reviews_count > 0)
            {
                var review = data.book.reviews.review.FirstOrDefault(); 
                reviewModel.ReviewText = review != null ? review.body : ""; 
                reviewModel.Rating = review != null ? Convert.ToDouble(review.rating) : 0;
            }
            else
            {
                reviewModel.ReviewText = ""; 
                reviewModel.Rating = 0;
            }

            return reviewModel;
        }
    }
}
