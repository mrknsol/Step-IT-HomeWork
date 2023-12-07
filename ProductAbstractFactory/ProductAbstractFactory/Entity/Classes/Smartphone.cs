using ProductAbstractFactory.Entity.Intefaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProductAbstractFactory.Entity.Classes
{
    public class Smartphone : IElectronics
    {
        public string GetProductDetails()
        {
            return "Smartphone: Iphone 15 PRO MAX - 1599$";
        }
    }
}
