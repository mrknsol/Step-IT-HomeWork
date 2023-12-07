using ProductAbstractFactory.Entity.Intefaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProductAbstractFactory.Fabrics.Intefaces
{
    public interface IProductFactory
    {
        IElectronics CreateElectronics();
        IClothes CreateClothing();
    }
}
