using System;

public interface IAutomobile
{
    string GetModelInfo();
}

public class Sedan : IAutomobile
{
    public string GetModelInfo()
    {
        return "Sedan: Comfortable and stylish.";
    }
}

public class SUV : IAutomobile
{
    public string GetModelInfo()
    {
        return "SUV: Spacious and versatile.";
    }
}

public class Truck : IAutomobile
{
    public string GetModelInfo()
    {
        return "Truck: Powerful and rugged.";
    }
}

public interface IAutomobileFactory
{
    IAutomobile CreateAutomobile();
}

public class SedanFactory : IAutomobileFactory
{
    public IAutomobile CreateAutomobile()
    {
        return new Sedan();
    }
}

public class SUVFactory : IAutomobileFactory
{
    public IAutomobile CreateAutomobile()
    {
        return new SUV();
    }
}

public class TruckFactory : IAutomobileFactory
{
    public IAutomobile CreateAutomobile()
    {
        return new Truck();
    }
}

class Program
{
    static void Main()
    {
        IAutomobileFactory sedanFactory = new SedanFactory();
        IAutomobileFactory suvFactory = new SUVFactory();
        IAutomobileFactory truckFactory = new TruckFactory();

        IAutomobile sedan = sedanFactory.CreateAutomobile();
        IAutomobile suv = suvFactory.CreateAutomobile();
        IAutomobile truck = truckFactory.CreateAutomobile();

        Console.WriteLine(sedan.GetModelInfo());
        Console.WriteLine(suv.GetModelInfo());
        Console.WriteLine(truck.GetModelInfo());
    }
}