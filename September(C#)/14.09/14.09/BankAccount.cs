namespace BankAccount;

public class BankAccount
{
    private string _name;
    private double _balance;

    public double Balance
    {
        get => _balance;
        set
        {
            if (value < 0)
                throw new ArgumentOutOfRangeException("Balance cannot be negative!");
            _balance = value;
        }
    }

    public string Name { get => _name;
        set
        {
            if (string.IsNullOrWhiteSpace(value))
                throw new ArgumentException("Error. Write your name!");
            _name = value;   
        }
    }


    public BankAccount(string accountName, double balance)
    {
        Name = accountName;
        Balance = balance;
    }

    public BankAccount() {}


    delegate void AccountOperation(double amount);


    public void Deposit(double amount)
    {
        Balance += amount;
        AccountOperation accountOperation = (x) => Console.WriteLine($"Было внесено: {amount:C}");
        accountOperation(amount);
        
        /*AccountOperation accountOperation = delegate(double amount)
        {
            Console.WriteLine($"В счет было внесено: {amount:C}");
        };
        accountOperation(amount);*/
    }

    public void Withdraw(double amount)
    {
        if (Balance < amount)
            throw new Exception("На счету мало баланса для снятия денег");
        else
        {
            Balance -= amount;
            AccountOperation accountOperation = (x) => Console.WriteLine($"Со счета было снято: {amount:C}");
            accountOperation(amount);
        }
    }


    public double GetBalance()
    {
        return Balance;
    }
    
}
