using ProductAbstractFactory.Entity.Classes;
using ProductAbstractFactory.Entity.Intefaces;
using ProductAbstractFactory.Fabrics.Intefaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProductAbstractFactory.Fabrics.Classes
{
    public class ClothesFactory : IProductFactory
    {

        public IClothes CreateClothing()
        {
            return new TShirt();
        }

        public IElectronics CreateElectronics()
        {
            throw new NotImplementedException();
        }
    }
}
