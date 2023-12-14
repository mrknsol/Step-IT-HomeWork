using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace State
{
    public class NewOrderState : IOrderState
    {
        public void ProcessOrder(OrderContext context)
        {
            Console.WriteLine("Processing order. Shipping items.");
            context.SetState(new InProcessOrderState());
        }

        public void CancelOrder(OrderContext context)
        {
            Console.WriteLine("Cancelling order. Returning items.");
            context.SetState(new CancelledOrderState());
        }
    }
}
