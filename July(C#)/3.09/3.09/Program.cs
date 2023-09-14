
#region Task1
//
// string name = Console.ReadLine();
// int year = int.Parse(Console.ReadLine());
// string number = Console.ReadLine();
// string email = Console.ReadLine();
// int staffCount = int.Parse(Console.ReadLine());
//
// Journal journal = new Journal(name,year,number,email,staffCount);
//
// Console.WriteLine(journal);
//
// journal.StaffCount += 10;
//
// Console.WriteLine(journal);
//
// class Journal
// {
//     public string Name { get; set; }
//     public int CreateYear { get; set; }
//     public string Number { get; set; }
//     public string Email { get; set; }
//     public int StaffCount { get; set; }
//
//
//     public static int operator +(Journal journal, int value)
//     {
//         return journal.StaffCount += value;
//     }
//
//     public static int operator -(Journal journal, int value)
//     {
//         return journal.StaffCount -= value;
//     }
//
//     public static bool operator ==(Journal j1, Journal j2)
//     {
//         return j1.StaffCount == j2.StaffCount;
//     }
//     
//     public static bool operator !=(Journal j1, Journal j2)
//     {
//         return j1.StaffCount != j2.StaffCount;
//     }
//
//     public override bool Equals(object obj)
//     {
//         if (obj is Journal)
//         {
//             Journal j = obj as Journal;
//             return j.StaffCount == StaffCount;
//         }
//
//         return false;
//     }
//     public Journal(string name, int createYear, string number, string email, int staffCount)
//     {
//         Name = name;
//         CreateYear = createYear;
//         Number = number;
//         Email = email;
//         StaffCount = staffCount;
//     }
//     
//     public override string ToString()
//     {
//         return $"Journal name: {Name}\n" +
//                $"Journal year: {CreateYear}\n" +
//                $"Personal number: {Number}\n" +
//                $"Email: {Email}\n" +
//                $"Staff count: {StaffCount}\n";
//     }
// }

#endregion

#region Task2

// string name = Console.ReadLine();
// string address = Console.ReadLine();
// string description =Console.ReadLine();
// string number = Console.ReadLine();
// string email = Console.ReadLine();
// double area = double.Parse(Console.ReadLine());
//
// Magazine magazine = new Magazine(name, address, description, number, email,area);
//
// class Magazine
// {
//     public string Name { get; set; }
//     public string Address{  get; set; }
//     public string Description { get; set; }
//     public string Number { get; set; }
//     public string Email { get; set; }
//     
//     public double Area { get; set; }
//
//     public override bool Equals(object obj)
//     {
//         if (obj is Magazine)
//         {
//             Magazine m = obj as Magazine;
//             return m.Area == Area;
//         }
//
//         return false;
//     }
//
//     public static double operator +(Magazine m, double value)
//     {
//         return m.Area += value;
//     }
//
//     public static double operator -(Magazine m, double value)
//     {
//         return m.Area -= value;
//     }
//
//     public static bool operator ==(Magazine m1, Magazine m2)
//     {
//         return m1.Area == m2.Area;
//     }
//     
//     public static bool operator !=(Magazine m1, Magazine m2)
//     {
//         return m1.Area != m2.Area;
//     }
//     
//     public Magazine(string name, string address, string description, string number, string email, double area)
//     {
//         Name = name;
//         Address = address;
//         Description = description;
//         Number = number;
//         Email = email;
//         Area = area;
//     }
//     
//
//     public override string ToString()
//     {
//         return $"Magazine name: {Name}\n" +
//                $"Magazine address: {Address}\n" +
//                $"Magazine description: {Description}\n" +
//                $"Magazine number: {Number}\n" +
//                $"Email: {Email}\n";
//     }
// }

#endregion

#region Task3

// bool key = true;
// List<Book> books = new List<Book>();
//
// while (key)
// {
//     Console.Write("1. Add book\n" +
//                   "2. Delete book\n" +
//                   "3. Search book\n" +
//                   "4. Show all books"+
//                   "5. Exit\n"+
//                   "Enter choice - ");
//     int choice = int.Parse(Console.ReadLine());
//
//     switch (choice)
//     {
//         case 1:
//             Console.Write("Enter book name - ");
//             string name = Console.ReadLine();
//             Console.Write("Enter book author - ");
//             string author = Console.ReadLine();
//             books.Add(new Book(name, author));
//             break;
//         case 2:
//             Console.Write("Enter book name - ");
//             string name_d = Console.ReadLine();
//             
//             for (int i = 0; i < books.Count; i++)
//             {
//                 if (books[i].BookName == name_d)
//                 {
//                     books.Remove(books[i]);
//                 }
//             }
//
//             break;
//         case 3:
//             Console.Write("Enter book name - ");
//             string name_s = Console.ReadLine();
//             for (int i = 0; i < books.Count; i++)
//             {
//                 if (name_s == books[i].BookName)
//                 {
//                     Console.WriteLine(books[i]);
//                 }
//             }
//             break;
//         case 4:
//             for (int i = 0; i < books.Count; i++)
//             {
//                 Console.WriteLine(books[i]);
//             }
//
//             break;
//         default:
//             break;
//     }
// }
//
//
//
//
//     class Book
//     {
//         public string BookName { get; set; }
//         public string Author { get; set; }
//
//         public Book() { }
//
//         public Book(string BookName, string Author) 
//         {
//             this.BookName = BookName;
//             this.Author = Author;
//         }
//
//         public static bool operator ==(Book left, Book right)
//         {
//             return left.BookName == right.BookName;
//         }
//         public static bool operator !=(Book left, Book right)
//         {
//             return !(left.BookName == right.BookName);
//         }
//
//         public override string ToString()
//         {
//             return $"Book name - {BookName}\n" + $"Book author - {Author}";
//         }
//     }

#endregion