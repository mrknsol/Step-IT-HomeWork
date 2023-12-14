using State;

class Program
{
    static void Main()
    {
        OrderContext order = new OrderContext();

        order.ProcessOrder();  
        order.ProcessOrder();  

        order.CancelOrder();   
        order.CancelOrder();  
    }
}