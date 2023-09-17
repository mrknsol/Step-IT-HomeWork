using System.ComponentModel.Design;

#region Task1
//
// Console.Write("Enter Dollar: ");
// int dollar = int.Parse(Console.ReadLine());
// Console.Write("Enter Cents: ");
// int cent = int.Parse(Console.ReadLine());
//
//
//
// Product product = new Product(dollar,cent);
// product.Info();
// product.Less(dollar,cent);
//     
// product.Info();
//
//
// abstract class Money    
// {
//     private int _dollar;
//     private int _cent;
//     
//     public int Dollars
//     {
//         get => _dollar;
//         set
//         {
//             if (value < 0)
//                 throw new Exception("Error!Money can't be negative");
//             _dollar = value;  
//         }
//     }
//     public int Cent
//     {
//         get => _cent;
//         set
//         {
//             if (value < 0)
//                 throw new Exception("Error!Money can't be negative");
//             if (value >= 100)
//             {
//                 Dollars += value / 100;
//                 _cent = value % 100;
//             }
//             else
//                 _cent = value;
//
//         }
//     }
//
// }
//
// class Product : Money
// {
//     public Product(int dollars, int cent)
//     {
//         Dollars = dollars;
//         Cent = cent;
//     }
//
//     public void Less(int dollar, int cent)
//     {
//         Console.Write("Enter what you want to buy\n1.for Bread(1$)\n2.for Mouse(120.00$)\n3.for Keyboard(89$)\n4.for PC(1200.00$)\nChoose: ");
//         int choice = int.Parse(Console.ReadLine());
//         switch (choice)
//         { 
//             case 1: 
//                 Dollars -= 0; 
//                 Cent -= 70; 
//                 break;
//             case 2: 
//                 Dollars -= 120; 
//                 Cent -= 0; 
//                 break;
//             case 3: 
//                 Dollars -= 89; 
//                 Cent -= 99; 
//                 break;
//             case 4: 
//                 Dollars -= 1200; 
//                 Cent -= 0; 
//                 break;
//         }
//     }
//     
//     
//     public void Info()
//     {
//         Console.WriteLine($"{Dollars} Dollar {Cent} cent");
//     }
//
//    
// }

#endregion

#region Task2
// using System.Diagnostics.Tracing;
//
// Automobile automobile = new Automobile("Car", "Color");
// Microwave microwave = new Microwave("Microwave", "White");
// Kettle kettle = new Kettle("Kettle", "Black");
// Steamship steamship = new Steamship("Steamship", "Pink");
//
// automobile.Show();
// automobile.Desc();
//
// abstract class Device
// {
//     public abstract string Name { get; set; }
//     public abstract string Color { get; set; }
//
//
//
//
//     public virtual void Sound(){}
//     public virtual void Show(){}
//     public virtual void Desc(){}
// }
//
//
// class Kettle : Device
// {
//     private string _name;
//     private string _color;
//
//     
//     public override string Name
//     {
//         get => _name;
//         set
//         {
//             if (string.IsNullOrEmpty(value) || string.IsNullOrWhiteSpace(value))
//                 throw new Exception("String is empty!");
//             else
//                 _name = value;
//         }
//
//     }
//
//     public override string Color 
//     {   get=>_color;
//         set
//         {
//             if (string.IsNullOrEmpty(value) || string.IsNullOrWhiteSpace(value))
//                 throw new Exception("String is empty!");
//             else
//                 _color = value;
//         }
//     }
//
//     public Kettle(string name, string color)
//     {
//         Name = name;
//         Color = color;
//     }
//
//     public override void Sound()
//     {
//         Console.WriteLine("Makes a whistle sound");
//     }
//
//     public override void Show()
//     {
//         Console.WriteLine($"Name: {Name}");
//     }
//
//     public override void Desc()
//     {
//         Console.WriteLine("A teapot is a source of comfort and aromatic tea.");
//     }
// }
//
// class Microwave : Device
// {
//     private string _name;
//     private string _color;
//     
//     public override string Name { 
//         get => _name;
//         set
//         {
//             if (string.IsNullOrEmpty(value) || string.IsNullOrWhiteSpace(value))
//                 throw new Exception("String is empty!");
//             _name = value;
//         }
//     }
//
//     public override string Color
//     {
//         get=>_color;
//         set
//         {
//             if (string.IsNullOrEmpty(value) || string.IsNullOrWhiteSpace(value))
//                 throw new Exception("String is empty!");
//             _color = value;
//         }
//         
//     }
//     
//     public Microwave(string name, string color)
//     {
//         Name = name;
//         Color = color;
//     }
//
//     public override void Sound()
//     {
//         Console.WriteLine("Sound microwawe");
//     }
//
//     public override void Show()
//     {
//         Console.WriteLine($"Name: {Name}");
//     }
//
//     public override void Desc()
//     {
//         Console.WriteLine("The microwave is a source of quick and tasty cooking.");
//     }
// }
//
// class Automobile : Device
// {
//     private string _name;
//     private string _color;
//     
//     public override string Name { 
//         get => _name;
//         set
//         {
//             if (string.IsNullOrEmpty(value) || string.IsNullOrWhiteSpace(value))
//                 throw new Exception("String is empty!");
//             _name = value;
//         }
//     }
//
//     public override string Color
//     {
//         get=>_color;
//         set
//         {
//             if (string.IsNullOrEmpty(value) || string.IsNullOrWhiteSpace(value))
//                 throw new Exception("String is empty!");
//             _color = value;
//         }
//         
//     }
//     
//     public Automobile(string name, string color)
//     {
//         Name = name;
//         Color = color;
//     }
//
//     public override void Sound()
//     {
//         Console.WriteLine("Car sound");
//     }
//
//     public override void Desc()
//     {
//         Console.WriteLine("A car means freedom of movement and adventure.");
//     }
//
//     public override void Show()
//     {
//         Console.WriteLine($"Name: {Name}");
//     }
// }
//
//
// class Steamship : Device
// {
//     private string _name;
//     private string _color;
//     
//     public override string Name { 
//         get => _name;
//         set
//         {
//             if (string.IsNullOrEmpty(value) || string.IsNullOrWhiteSpace(value))
//                 throw new Exception("String is empty!");
//             _name = value;
//         }
//     }
//
//     public override string Color
//     {
//         get=>_color;
//         set
//         {
//             if (string.IsNullOrEmpty(value) || string.IsNullOrWhiteSpace(value))
//                 throw new Exception("String is empty!");
//             _color = value;
//         }
//         
//     }
//     
//     public Steamship(string name, string color)
//     {
//         Name = name;
//         Color = color;
//     }
//     
//     public override void Show()
//     {
//         Console.WriteLine($"Name: {Name}");
//     }
//
//     public override void Sound()
//     {
//         Console.WriteLine("Sound steamship");
//     }
//
//     public override void Desc()
//     {
//         Console.WriteLine("Steamboat - a symbol of sailing and adventure on open waters");
//     }
// }

#endregion

#region Task3

// using System.Threading.Channels;
//
//
// abstract class MusicalInstrument
// {
//     
//     public abstract void Sound();
//     public abstract void Show();
//     public abstract void Desc();
//     public abstract void History();
//     
//     
// }
//
// class Violin : MusicalInstrument
// {
//     public string Name { get; set; } = "Violin";
//
//     public override void Sound()
//     {
//         Console.WriteLine($"{Name} sound");
//     }
//
//     public override void Desc()
//     {
//         Console.WriteLine("Elegant and melodic, the violin is a stringed musical instrument with a long neck and bow.");
//     }
//
//     public override void History()
//     {
//         Console.WriteLine("The violin was developed in the 16th century in Italy and has since become one of the most popular instruments in the world.");
//     }
//
//     public override void Show()
//     {
//         Console.WriteLine($"Name: {Name}");
//     }
// }
//
//
//
// class Trombone : MusicalInstrument
// {
//     public string Name { get; set; } = "Trombone";
//
//     public override void Sound()
//     {
//         Console.WriteLine($"{Name} sound");
//     }
//
//     public override void Desc()
//     {
//         Console.WriteLine("Description: The trombone is a brass instrument with a long pipe and a retractable sectional comb that changes the pitch of the sound.");
//     }
//
//     public override void History()
//     {
//         Console.WriteLine("The trombone has been known since the Renaissance and remains an important part of orchestral music.");
//     }
//
//     public override void Show()
//     {
//         Console.WriteLine($"Name: {Name}");
//     }
// }
//
//
//
// class Ukulele : MusicalInstrument
// {
//     public string Name { get; set; } = "Ukulele";
//
//     public override void Sound()
//     {
//         Console.WriteLine($"{Name} sound");
//     }
//
//     public override void Desc()
//     {
//         Console.WriteLine("The ukulele is a small stringed instrument with four strings that creates bright and cheerful sounds.");
//     }
//
//     public override void History()
//     {
//         Console.WriteLine("The ukulele was developed in Hawaii in the 19th century and quickly gained popularity due to its unique sonority.");
//     }
//
//     public override void Show()
//     {
//         Console.WriteLine($"Name: {Name}");
//     }
// }
//
//
// class Cello : MusicalInstrument
// {
//     public string Name { get; set; } = "Cello";
//
//     public override void Sound()
//     {
//         Console.WriteLine($"{Name} sound");
//     }
//
//     public override void Desc()
//     {
//         Console.WriteLine("The cello is a large stringed instrument that is played with a bow and produces a rich, deep sound.");
//     }
//
//     public override void History()
//     {
//         Console.WriteLine("The cello was developed in the 16th century and became an integral part of symphony orchestras and chamber music.");
//     }
//
//     public override void Show()
//     {
//         Console.WriteLine($"Name: {Name}");
//     }
// }
#endregion

#region Task4

// using System.Runtime.CompilerServices;
//
// abstract class Worker
// {
//     public abstract void Print();
// }
//
// class Security : Worker
// {
//     public override void Print()
//     {
//         Console.WriteLine("Security");
//     }
// }
//
// class Manager : Worker
// {
//     public override void Print()
//     {
//         Console.WriteLine("Manager");
//     }
// }
//
// class Engineer : Worker
// {
//     public override void Print()
//     {
//         Console.WriteLine("Engineer");
//     }
// }
//
// class President : Worker
// {
//     public override void Print()
//     {
//         Console.WriteLine("President");
//     }
// }
#endregion