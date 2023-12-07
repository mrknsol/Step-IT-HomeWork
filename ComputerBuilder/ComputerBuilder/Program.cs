using ComputerBuilder.Builders;
using ComputerBuilder.Entities;
using ComputerBuilder.Entities;
using ComputerBuilder.Services.Classes;
using ComputerBuilder.Services.Intefaces;

namespace ComputerBuilder.Program
{
    class Program
    {
        static void Main()
        {
            ComputerDirector director = new ComputerDirector();

            IComputerBuilder officeBuilder = new OfficeComputerBuilder();
            IComputerBuilder gamingBuilder = new GamingComputerBuilder();
            IComputerBuilder designerBuilder = new DesignerComputerBuilder();

            director.ConstructComputer(officeBuilder);
            Computer officeComputer = officeBuilder.GetComputer();

            director.ConstructComputer(gamingBuilder);
            Computer gamingComputer = gamingBuilder.GetComputer();

            director.ConstructComputer(designerBuilder);
            Computer designerComputer = designerBuilder.GetComputer();

            System.Console.WriteLine("Office Computer:");
            officeComputer.DisplayInfo();

            System.Console.WriteLine("Gaming Computer:");
            gamingComputer.DisplayInfo();

            System.Console.WriteLine("Designer Computer:");
            designerComputer.DisplayInfo();
        }
    }
}