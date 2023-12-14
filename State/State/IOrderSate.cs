using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace State
{
    public interface IOrderState
    {
        void ProcessOrder(OrderContext context);
        void CancelOrder(OrderContext context);
    }
}
