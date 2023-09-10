#region Part1
// Console.Write("1 for From decimal to binary\n2. for from binary to decimal");
//
// Console.Write("Enter your choice: ");
// int choice = int.Parse(Console.ReadLine());
//
// Console.Write("Enter your number: ");
// int num = int.Parse(Console.ReadLine());
//
// List<int> list = new List<int>();
//
// switch (choice)
// {
//     case 1:
//     {
//         while (num != 0)
//         {
//             list.Add(num % 2);
//             num /= 2;
//         }
//
//         list.Reverse();
//         for (int i = 0; i < list.Count; i++)
//         {
//             Console.Write(list[i]);
//         }
//         break;
//     }
// }
#endregion


#region Part2
// Console.Write("Enter number from 0 to 9 in word: ");
// string word = Console.ReadLine();
//
// switch (word)
// {
//     case "zero":
//     {
//         Console.WriteLine(0);
//         break;
//     }
//     case "one":
//     {
//         Console.WriteLine(1);
//
//         break;
//     }
//     case "two":
//     {
//         Console.WriteLine(2);
//
//         break;
//     }
//     case "three":
//     {
//         Console.WriteLine(3);
//
//         break;
//     }
//     case "four":
//     {
//         Console.WriteLine(4);
//
//         break;
//     }
//     case "five":
//     {
//         Console.WriteLine(5);
//
//         break;
//     }
//     case "six":
//     {
//         Console.WriteLine(6);
//
//         break;
//     }
//     case "sever":
//     {
//         Console.WriteLine(7);
//
//         break;
//     }
//     case "eight":
//     {
//         Console.WriteLine(8);
//
//         break;
//     }
//     case "nine":
//     {
//         Console.WriteLine(9);
//
//         break;
//     }
//
// }
#endregion

#region Part3
//
// try
// {
//     string passportNum = "141163432";
//     string fullname = "Kenan Memmedov";
//     DateTime issueDate = new DateTime(2024, 10, 31);
//     Passport passport = new Passport(passportNum,fullname, issueDate);
//
//     Console.WriteLine(passport);
//
// }
// catch (Exception ex)
// {
//     Console.WriteLine(ex.Message);
// }
// public class Passport
// {
//     private string passportNum;
//     private string fullName;
//     private DateTime issueDate;
//
//
//     public string PassportNumber
//     {
//         get => passportNum;
//         set
//         {
//             if (value.Length > 10 )
//                 throw new Exception("The passport number must consists of only 10 digits.");
//             passportNum = value;
//         }
//     }
//
//     public string FullName
//     {
//         get => fullName;
//         set
//         {
//             if (string.IsNullOrEmpty(value) || string.IsNullOrWhiteSpace(value))
//                 throw new ArgumentException("Error! FullName is incorrect");
//             fullName = value;
//         }
//     }
//
//     public DateTime IssueDate
//     {
//         get => issueDate;
//         set
//         {
//             if (value > DateTime.Now)
//                 throw new ArgumentException("Error Date is incorrect");
//             issueDate = value;
//         }
//     }
//
//     public Passport(string passportNumber, string fullName, DateTime issueDate)
//     {
//         PassportNumber = passportNumber;
//         FullName = fullName;
//         IssueDate = issueDate;
//
//
//     }
//
//     public override string ToString()
//     {
//         return $"Full Name: {FullName}\n" +
//                $"Number of Passport: {PassportNumber}\n" +
//                $"Issue Date of Passport: {IssueDate}\n";
//     }
//
//
// }
#endregion