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
    public class ElectronicsFactory : IProductFactory
    {
        public IClothes CreateClothing()
        {
            throw new NotImplementedException();
        }

        public IElectronics CreateElectronics()
        {
            return new Smartphone();
        }

    }
}
