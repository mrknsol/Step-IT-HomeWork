using ComputerBuilder.Services.Intefaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ComputerBuilder.Builders
{
    public class GamingComputerBuilder : ComputerBuilder, IComputerBuilder
    {
        public override void BuildProcessor()
        {
            computer.Processor = Parts.Processor.GamingProcessor;
        }

        public override void BuildMemory()
        {
            computer.Memory = Parts.Memory.HighPerformanceMemory;
        }

        public override void BuildGraphicsCard()
        {
            computer.GraphicsCard = Parts.GPU.GamingGraphicsCard;
        }

        public override void BuildStorage()
        {
            computer.Storage = Parts.Storage.SSDStorage;
        }
    }
}
