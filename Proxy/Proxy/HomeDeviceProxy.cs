using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Proxy
{
    public class HomeDeviceProxy : IHomeDevice
    {
        private readonly string location;
        private readonly string user;

        private Light realLight;

        public HomeDeviceProxy(string location, string user)
        {
            this.location = location;
            this.user = user;
        }

        private void CheckAccess()
        {
            if (user != "admin")
            {
                Console.WriteLine($"Access denied for user {user}");
                throw new UnauthorizedAccessException("Access denied");
            }
        }

        public void TurnOn()
        {
            CheckAccess();
            InitializeRealLight();

            Console.WriteLine($"Turning on light in {location}");
            realLight.TurnOn();
        }

        public void TurnOff()
        {
            CheckAccess();
            InitializeRealLight();

            Console.WriteLine($"Turning off light in {location}");
            realLight.TurnOff();
        }

        private void InitializeRealLight()
        {
            if (realLight == null)
            {
                realLight = new Light(location);
            }
        }
    }
}
