using ComputerBuilder.Services.Intefaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ComputerBuilder.Builders
{
    public class DesignerComputerBuilder : ComputerBuilder, IComputerBuilder
    {
        public override void BuildProcessor()
        {
            computer.Processor = Parts.Processor.DesignerProcessor;
        }

        public override void BuildMemory()
        {
            computer.Memory = Parts.Memory.HighCapacityMemory;
        }

        public override void BuildGraphicsCard()
        {
            computer.GraphicsCard = Parts.GPU.ProfessionalGraphicsCard;
        }

        public override void BuildStorage()
        {
            computer.Storage = Parts.Storage.LargeHDDStorage;
        }
    }
}
