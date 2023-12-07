using ComputerBuilder.Services.Intefaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ComputerBuilder.Builders
{
    public class OfficeComputerBuilder : ComputerBuilder, IComputerBuilder
    {
        public override void BuildProcessor()
        {
            computer.Processor = Parts.Processor.OfficeProcessor;
        }

        public override void BuildMemory()
        {
            computer.Memory = Parts.Memory.StandardMemory;
        }

        public override void BuildGraphicsCard()
        {
            computer.GraphicsCard = Parts.GPU.BasicGraphicsCard;
        }

        public override void BuildStorage()
        {
            computer.Storage = Parts.Storage.StandardStorage;
        }
    }
}
