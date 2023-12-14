using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FlyWeight
{
    public class TeaType
    {
        public string Flavor { get; }

        public TeaType(string flavor)
        {
            Flavor = flavor;
        }
    }
}
