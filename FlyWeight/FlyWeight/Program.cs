using FlyWeight;

class Program
{
    static void Main()
    {
        TeaFactory teaFactory = new TeaFactory();

        ITea greenTea = teaFactory.GetTeaType("Green Tea");
        ITea blackTea = teaFactory.GetTeaType("Black Tea");

        greenTea.ServeTea("table 1");
        blackTea.ServeTea("table 2");
        greenTea.ServeTea("table 3");
    }
}