using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace State
{
    public class CancelledOrderState : IOrderState
    {
        public void ProcessOrder(OrderContext context)
        {
            Console.WriteLine("Cannot process cancelled order.");
        }

        public void CancelOrder(OrderContext context)
        {
            Console.WriteLine("Order is already cancelled.");
        }
    }
}
