#region Task1

//int[] A = new int[5];
//int[,] B = new int[3, 4];


//Console.WriteLine("Enter numbers in first array: ");
//for (int k = 0; k < A.Length; k++)
//{
//    A[k] = Int32.Parse(Console.ReadLine());
//}

//for (int i = 0; i < 3; i++)
//{
//    for (int j = 0; j < 4; j++)
//    {
//        Random rand = new Random();
//        B[i, j] = rand.Next(1, 15);
//    }
//}

//Console.WriteLine("First array: ");
//for (int i = 0; i < A.Length; i++)
//{
//    Console.Write($"{A[i]} \t");
//}

//Console.WriteLine("\n");

//Console.WriteLine("Second array: ");
//for (int i = 0; i < 3; i++)
//{
//    for (int j = 0; j < 4; j++)
//    {
//        Console.Write($"{B[i, j]} \t");
//    }
//    Console.WriteLine();
//}


//int max1 = 0;
//int min1 = 100;
//int sum1 = 0;
//int mult1 = 1;
//int sumEven = 0;
//int sumOdd = 0;

//for (int i = 0; i < A.Length; i++)
//{
//    if (A[i] > max1)
//    {
//        max1 = A[i];
//    }
//    if (A[i] < min1)
//    {
//        min1 = A[i];
//    }
//    sum1 += A[i];
//    mult1 *= A[i];
//    if (A[i] % 2 == 0)
//    {
//        sumEven += A[i];
//    }

//}

//for (int i = 0; i < 3; i++)
//{
//    for (int j = 0; j < 4; j++)
//    {
//        if (B[i, j] > max1)
//        {
//            max1 = B[i, j];
//        }
//        if (B[i, j] < min1)
//        {
//            min1 = B[i, j];
//        }
//        sum1 += B[i, j];
//        mult1 *= B[i, j];
//        if (B[i, j] % 2 != 0)
//        {
//            sumOdd += B[i, j];
//        }
//    }
//}

//Console.WriteLine($"Max: {max1}");
//Console.WriteLine($"Min: {min1}");
//Console.WriteLine($"Sum: {sum1}");
//Console.WriteLine($"Mult: {mult1}");
//Console.WriteLine($"Sum of even numbers of array A: {sumEven}");
//Console.WriteLine($"Sum of odd numbers of array B: {sumOdd}");


#endregion 


#region Task2

//int[,] array = new int[5, 5];


//for (int i = 0; i < 5; i++)
//{
//    for (int j = 0; j < 5; j++)
//    {
//        Random rand = new Random();
//        array[i, j] = rand.Next(-100, 100);
//        Console.Write($"{array[i, j]} \t");
//    }

//    Console.WriteLine();
//}


#endregion 


#region Task3


//class Program
//{
//    static string CaesarEncrypt(string text, int shift)
//    {
//        string encrypted = "";


//        foreach (char ch in text)
//        {
//            if (char.IsLetter(ch))
//            {
//                char shifted = (char)(ch + shift);

//                if (char.IsLower((ch)))
//                {
//                    if (shifted > 'z')
//                        shifted = (char)(shifted - 26);
//                }
//                else if (char.IsUpper((ch)))
//                {
//                    if (shifted > 'Z')
//                        shifted = (char)(shifted - 26);
//                }

//                encrypted += shifted;
//            }
//            else
//            {
//                encrypted += ch;
//            }
//        }

//        return encrypted;
//    }




//    static void Main(string[] args)
//    {

//        Console.WriteLine("Enter text to encrypt: ");
//        string text = Console.ReadLine();

//        Console.WriteLine("Enter count of shifts: ");
//        int shift = Int32.Parse(Console.ReadLine());

//        string encryptedText = CaesarEncrypt(text, shift);
//        Console.WriteLine("Encrypted text: " + encryptedText);
//    }
//}


#endregion Task3


#region Task4

//int[,] array = new int[3, 3] { { 3, 6, 2 }, { 2, 7, 8 }, { 4, 1, 5 } };

//for (int i = 0; i < 3; i++)
//{
//    for (int j = 0; j < 3; j++)
//    {
//        Console.Write($"{array[i, j]} \t");
//    }

//    Console.WriteLine();
//}


//int choice = 0;
//do
//{

//    Console.WriteLine("Enter what to do: \n" +
//                      "1. Multiplication of a matrix by a number \n" +
//                      "2. Matrix addition \n" +
//                      "3. Product of matrices \n" +
//                      "4. End program \n");

//    choice = Int32.Parse(Console.ReadLine());

//    switch (choice)
//    {
//        case 1:
//            {
//                Console.WriteLine("Enter number to multiply: ");
//                int numMult = Int32.Parse(Console.ReadLine());

//                Console.WriteLine("Matrix after multiplication: \n");
//                for (int i = 0; i < 3; i++)
//                {
//                    for (int j = 0; j < 3; j++)
//                    {
//                        array[i, j] *= numMult;
//                        Console.Write($"{array[i, j]} \t");
//                    }
//                    Console.WriteLine();
//                }
//                break;
//            }
//        case 2:
//            {
//                int[,] arrayToSum = new int[3, 3] { { 2, 1, 4 }, { 3, 3, 3 }, { 5, 9, 1 } };
//                int[,] arrayResult = new int[3, 3];

//                Console.WriteLine("Matrix after addition: \n");
//                for (int i = 0; i < 3; i++)
//                {
//                    for (int j = 0; j < 3; j++)
//                    {
//                        arrayResult[i, j] = array[i, j] + arrayToSum[i, j];
//                        Console.Write($"{arrayResult[i, j]} \t");
//                    }

//                    Console.WriteLine();
//                }

//                break;
//            }
//        case 3:
//            {
//                int[,] arrayToMult = new int[3, 3] { { 5, 4, 3 }, { 1, 2, 3 }, { 9, 8, 5 } };
//                int[,] arrayResult = new int[3, 3];

//                Console.WriteLine("Matrix after multiplication: \n");
//                for (int i = 0; i < 3; i++)
//                {
//                    for (int j = 0; j < 3; j++)
//                    {
//                        arrayResult[i, j] = array[i, j] * arrayToMult[i, j];
//                        Console.Write($"{arrayResult[i, j]} \t");
//                    }

//                    Console.WriteLine();
//                }
//                break;
//            }
//        case 4:
//            {
//                choice = 4;
//                break;
//            }
//        default:
//            {
//                choice = 4;
//                break;
//            }
//    }



//} while (choice != 4);

#endregion Task4


#region Task5

//class Program
//{
//    static int CalculateExample(string example)
//    {

//        int result = 0;
//        char ooperator = '+';
//        int tmpNumber = 0;



//        foreach (char ch in example)
//        {

//            if (char.IsDigit(ch))
//            {
//                tmpNumber = ch - '0';
//            }
//            else if (ch == '+' || ch == '-')
//            {
//                if (ooperator == '+')
//                {
//                    result += tmpNumber;
//                }
//                else if (ooperator == '-')
//                {
//                    result -= tmpNumber;
//                }

//                tmpNumber = 0;
//                ooperator = ch;
//            }
//        }
//        if (ooperator == '+')
//        {
//            result += tmpNumber;
//        }
//        else if (ooperator == '-')
//        {
//            result -= tmpNumber;
//        }


//        return result;
//    }


//    static void Main(string[] args)
//    {

//        Console.WriteLine("Enter example: ");
//        string example = Console.ReadLine();

//        int result = CalculateExample(example);
//        Console.WriteLine(result);
//    }
//}

#endregion Task5


#region Task6


//class Program
//{

//    static string NormalizeString(string text)
//    {

//        string[] parts = text.Split(new[] { '.', '!', '?' }, StringSplitOptions.RemoveEmptyEntries);

//        for (int i = 0; i < parts.Length; i++)
//        {
//            parts[i] = char.ToUpper(parts[i][0]) + parts[i].Substring(1);
//        }
//        return string.Join(". ", parts);





//    }

//    static void Main(string[] args)
//    {

//        // Console.WriteLine("Enter your text: ");
//        string text = "hello world!whats up? ";

//        string result = NormalizeString(text);


//        Console.WriteLine(result);
//    }

//}


#endregion Task6


#region Task7

//string text = "To be, or not to be, that is the question,\n" +
//               "Whether 'tis nobler in the mind to suffer\n" +
//               "The slings and arrows of outrageous fortune,\n" +
//               "Or to take arms against a sea of troubles,\n" +
//               "And by opposing end them? To die: to sleep;\n" +
//               "No more; and by a sleep to say we end\n" +
//               "The heart-ache and the thousand natural shocks\n" +
//               "That flesh is heir to, 'tis a consummation\n" +
//               "Devoutly to be wish'd. To die, to sleep";


//List<string> wordToReplace = new List<string> { "die" };
//int count = 0;


//string[] words = text.Split(new[] { ' ', '.', ',', '!', '?', ':', ';' }, StringSplitOptions.RemoveEmptyEntries);

//for (int i = 0; i < words.Length; i++)
//{
//    if (wordToReplace.Contains(words[i].ToLower()))
//    {
//        words[i] = new string('*', words[i].Length);
//        count++;
//    }
//}

//string sanitizedText = string.Join(" ", words);
//Console.WriteLine("Result: ");
//Console.WriteLine(sanitizedText);

//Console.WriteLine("Statistic:");
//Console.WriteLine("Replaced words: " + count);




#endregion Task7
