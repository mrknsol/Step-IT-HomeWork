using ComputerBuilder.Entities;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ComputerBuilder.Services.Intefaces
{
    public interface IComputerBuilder
    {
        void BuildProcessor();
        void BuildMemory();
        void BuildGraphicsCard();
        void BuildStorage();
        Computer GetComputer();
    }
}
