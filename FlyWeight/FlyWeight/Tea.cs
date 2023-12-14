using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FlyWeight
{
    public class Tea : ITea
    {
        private readonly TeaType teaType;

        public Tea(TeaType teaType)
        {
            this.teaType = teaType;
        }

        public void ServeTea(string table)
        {
            Console.WriteLine($"Serve {teaType.Flavor} for {table}");
        }
    }
}
