using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace State
{
    public class InProcessOrderState : IOrderState
    {
        public void ProcessOrder(OrderContext context)
        {
            Console.WriteLine("Order is already being processed.");
        }

        public void CancelOrder(OrderContext context)
        {
            Console.WriteLine("Cancelling order. Returning items.");
            context.SetState(new CancelledOrderState());
        }
    }
}
