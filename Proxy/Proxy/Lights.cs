using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Proxy
{
    public class Light : IHomeDevice
    {
        private readonly string location;

        public Light(string location)
        {
            this.location = location;
        }

        public void TurnOn()
        {
            Console.WriteLine($"Light in {location} is turned on");
        }

        public void TurnOff()
        {
            Console.WriteLine($"Light in {location} is turned off");
        }
    }
}
