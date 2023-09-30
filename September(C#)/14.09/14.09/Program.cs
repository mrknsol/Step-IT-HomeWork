using System.Threading.Channels;
using System.Transactions;
using BankAccount;


try
{

    BankAccount.BankAccount bankAccount = new();
    
    Console.WriteLine("Enter account name: ");
    bankAccount.Name = Console.ReadLine();
    
    Console.WriteLine("Enter your balance: ");
    bankAccount.Balance = Double.Parse(Console.ReadLine());

    UInt16 choice = 0;

    do
    {
        Console.WriteLine("1.Deposit\n 2.Widhtdraw\n 3.View balance\n 4.Stop");
        Console.Write("Enter your choice: ");
        choice = UInt16.Parse(Console.ReadLine());

        switch (choice)
        {
            case 1:
            {
                Console.Write("Enter amount for deposit: ");
                double amount = Double.Parse(Console.ReadLine());
                bankAccount.Deposit(amount);

                break;
            }
            case 2:
            {
                Console.Write("Enter amount for widthdraw: ");
                double amount = Double.Parse(Console.ReadLine());
                bankAccount.Withdraw(amount);

                break;
            }
            case 3:
                Console.WriteLine(bankAccount.GetBalance());
                break;
            default:
                Console.WriteLine("Error!");
                break;
        }

    } while (choice != 4);

}
catch (Exception ex)
{
    Console.WriteLine(ex.Message);
}