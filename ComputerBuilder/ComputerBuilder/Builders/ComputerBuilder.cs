using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ComputerBuilder.Services;
using ComputerBuilder.Entities;
using ComputerBuilder.Services.Intefaces;

namespace ComputerBuilder.Builders
{
    public class ComputerBuilder : IComputerBuilder
    {
        protected Computer computer = new Computer();

        public virtual void BuildProcessor() { }
        public virtual void BuildMemory() { }
        public virtual void BuildGraphicsCard() { }
        public virtual void BuildStorage() { }

        public Computer GetComputer()
        {
            return computer;
        }
    }
}
