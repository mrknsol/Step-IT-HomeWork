using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace ApiProject
{
    public interface IGoodreadsAPI
    {
        Task<ReviewModel> GetBookReviews(string bookId);
    }
}