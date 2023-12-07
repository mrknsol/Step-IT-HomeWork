using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ComputerBuilder.Entities
{
    public class Computer
    {
        public string Processor { get; set; }
        public string Memory { get; set; }
        public string GraphicsCard { get; set; }
        public string Storage { get; set; }

        public void DisplayInfo()
        {
            System.Console.WriteLine($"Computer Configurations:\nProcessor: {Processor}\nMemory: {Memory}\nGraphics Card: {GraphicsCard}\nStorage: {Storage}\n");
        }
    }
}
