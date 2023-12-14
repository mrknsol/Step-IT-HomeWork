using Proxy;

class Program
{
    static void Main()
    {
        IHomeDevice lightProxy = new HomeDeviceProxy("Living Room", "admin");

        lightProxy.TurnOn();

        try
        {
            IHomeDevice unauthorizedLightProxy = new HomeDeviceProxy("Living Room", "guest");
            unauthorizedLightProxy.TurnOff();
        }
        catch (UnauthorizedAccessException ex)
        {
            Console.WriteLine($"Exception caught: {ex.Message}");
        }
    }
}