using ComputerBuilder.Services.Intefaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ComputerBuilder.Services.Classes
{
    public class ComputerDirector
    {
        public void ConstructComputer(IComputerBuilder builder)
        {
            builder.BuildProcessor();
            builder.BuildMemory();
            builder.BuildGraphicsCard();
            builder.BuildStorage();
        }
    }
}
