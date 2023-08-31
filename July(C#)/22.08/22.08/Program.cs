#pragma task 1
/*
Console.WriteLine("Enter number from 1 to 100:");
if (int.TryParse(Console.ReadLine(), out int number))
{
    if (number >= 1 && number <= 100)
    {
        if (number % 3 == 0 && number % 5 == 0)
        {
            Console.WriteLine("Fizz Buzz");
        }
        else if (number % 3 == 0)
        {
            Console.WriteLine("Fizz");
        }
        else if (number % 5 == 0)
        {
            Console.WriteLine("Buzz");
        }
        else
        {
            Console.WriteLine(number);
        }
    }
    else
    {
        Console.WriteLine("Error. Enter number from 1 to 100");
    }
}
else
{
    Console.WriteLine("Error. Reenter correctly");
}

#pragma task 2

Console.WriteLine("Enter number:");
if (int.TryParse(Console.ReadLine(), out int number))
{
    Console.WriteLine("Enter percent:");
    if (float.TryParse(Console.ReadLine(), out float percent))
    {
        float result = (percent / 100) * number;
        Console.WriteLine($"{percent} % from {number} = {result}");
    }
    else
    {
        Console.WriteLine("Error. Enter correct persent");
    }
}
else
{
    Console.WriteLine("Error. Enter correct number");
}

#pragma task 3

Console.WriteLine("Enter number:");
string input1 = Console.ReadLine();
Console.WriteLine("Enter number:");
string input2 = Console.ReadLine();
Console.WriteLine("Enter number:");
string input3 = Console.ReadLine();
Console.WriteLine("Enter number:");
string input4 = Console.ReadLine();

if (int.TryParse(input1, out int digit1) &&
    int.TryParse(input2, out int digit2) &&
    int.TryParse(input3, out int digit3) &&
    int.TryParse(input4, out int digit4))
{
    
    int resultNumber = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4;

    Console.WriteLine($"Answer: {resultNumber}");
}
else
{
    Console.WriteLine("Error. Enter four correct numbers...");
}


#pragma task 4

Console.WriteLine("Enter 6 digid number:");
if (int.TryParse(Console.ReadLine(), out int number))
{
    if (number >= 100000 && number <= 999999)
    {
        Console.WriteLine("Enter digin numbers to change(from 1 to 6):");
        string input = Console.ReadLine();

        if (TryParsePositions(input, out int position1, out int position2) && AreValidPositions(position1, position2))
        {
            int swappedNumber = SwapDigits(number, position1, position2);
            Console.WriteLine($"number after change: {swappedNumber}");
        }
        else
        {
            Console.WriteLine("ERROR: Reenter two new number to change.");
        }
    }
    else
    {
        Console.WriteLine("ERROR: Enter 6digid number.");
    }
}
else
{
    Console.WriteLine("ERROR: Enter number correctly.");
}

static bool TryParsePositions(string input, out int position1, out int position2)
{
    position1 = -1;
    position2 = -1;

    string[] parts = input.Split(new[] { "and", "or", "and" }, StringSplitOptions.RemoveEmptyEntries);

    if (parts.Length == 2 &&
        int.TryParse(parts[0].Trim(), out position1) &&
        int.TryParse(parts[1].Trim(), out position2))
    {
        return true;
    }

    return false;
}

static bool AreValidPositions(int position1, int position2)
{
    return position1 >= 1 && position1 <= 6 && position2 >= 1 && position2 <= 6;
}

static int SwapDigits(int number, int position1, int position2)
{
    int[] digits = new int[6];
    for (int i = 5; i >= 0; i--)
    {
        digits[i] = number % 10;
        number /= 10;
    }

    int temp = digits[position1 - 1];
    digits[position1 - 1] = digits[position2 - 1];
    digits[position2 - 1] = temp;

    int result = 0;
    for (int i = 0; i < 6; i++)
    {
        result = result * 10 + digits[i];
    }

    return result;
}

#pragma task5

Console.WriteLine("Введите дату (в формате дд.мм.гггг):");
if (DateTime.TryParse(Console.ReadLine(), out DateTime inputDate))
{
    string season = GetSeason(inputDate);
    string dayOfWeek = inputDate.ToString("dddd");
    Console.WriteLine($"{season} {dayOfWeek}");
}
else
{
    Console.WriteLine("Ошибка: Введите корректную дату.");
}
static string GetSeason(DateTime date)
{
    int month = date.Month;
    if (month >= 3 && month <= 5)
    {
        return "Spring";
    }
    else if (month >= 6 && month <= 8)
    {
        return "Summer";
    }
    else if (month >= 9 && month <= 11)
    {
        return "Autumn";
    }
    else
    {
        return "Winter";
    }
}

#pragma task 6

Console.WriteLine("Make a choice:");
Console.WriteLine("1. F to C");
Console.WriteLine("2. c TO F");

if (int.TryParse(Console.ReadLine(), out int choice))
{
    if (choice == 1)
    {
        Console.WriteLine("Enter temperature in F:");
        if (double.TryParse(Console.ReadLine(), out double fahrenheit))
        {
            double celsius = FahrenheitToCelsius(fahrenheit);
            Console.WriteLine($"Temperature in C: {celsius}°C");
        }
        else
        {
            Console.WriteLine("ERROR: Enter tempreture correctly.");
        }
    }
    else if (choice == 2)
    {
        Console.WriteLine("Enter temperature in C:");
        if (double.TryParse(Console.ReadLine(), out double celsius))
        {
            double fahrenheit = CelsiusToFahrenheit(celsius);
            Console.WriteLine($"Temperature in F: {fahrenheit}°F");
        }
        else
        {
            Console.WriteLine("ERROR: Enter temperature correctly.");
        }
    }
    else
    {
        Console.WriteLine("ERROR: NOT correct choice.");
    }
}
else
{
    Console.WriteLine("ERROR: Enter correct choice.");
}
    

    static double FahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

static double CelsiusToFahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}
*/

#pragma task7

Console.WriteLine("Enter two numbers to make a diapozone:");

if (int.TryParse(Console.ReadLine(), out int num1) && int.TryParse(Console.ReadLine(), out int num2))
{
    // Проверка и нормализация границ диапазона
    int start = Math.Min(num1, num2);
    int end = Math.Max(num1, num2);

    Console.WriteLine($"even numbers in diapozone {start} to {end}:");

    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            Console.WriteLine(i);
        }
    }
}
else
{
    Console.WriteLine("ERROR: Enter correct numbers.");
}
