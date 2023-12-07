using ProductAbstractFactory.Entity.Intefaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProductAbstractFactory.Entity.Classes
{
    public class TShirt : IClothes
    {
        public string GetProductDetails()
        {
            return "T-Shirt: 36$";
        }
    }
}
