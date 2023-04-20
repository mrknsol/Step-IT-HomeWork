#include <iostream>
using namespace std;

int main()
{
    //Task1
    /*int count = 0;
    int numbers1, numbers2, numbers3;
    for (int i = 100; i <= 999; i++)
    {
        numbers1 = i / 100;
        numbers2 = i % 10;
        numbers3 = (i % 100) / 10;
        if (numbers1 == numbers2 || numbers2 == numbers3 || numbers3 == numbers1)
            count++;

    }
    cout << "Result: " << count << endl;*/



    //Task 2
    /*int count = 0;
    int numbers1, numbers2, numbers3;
    for (int i = 100; i <= 999; i++)
    {
        numbers1 = i / 100;
        numbers2 = i % 10;
        numbers3 = (i % 100) / 10;
        if (numbers1 != numbers2 || numbers2 != numbers3 || numbers3 != numbers1)
            count++;

    }
    cout << "Result: " << count << endl;*/


    //Task 3

    /*int a = 0, number{};

    cout << "enter number: ";
    cin >> number;
    cout << endl;

    while (number > 0)
    {
        if (number % 10 != 3 && number % 10 != 6)
        {
            a *= 10;
            a += number % 10;
        }
        number /= 10;
    }

    cout << "here it's: ";

    while (a > 0)
    {
        cout << a % 10;
        a /= 10;
    }
    cout << endl << endl;*/


    //Task 4
    /*int A{}, B{};
    cout << "enter number: ";
    cin >> A;
    for (int i = A - 1; i > 1; i--)
    {
        B = i; if ((A % (B * B) == 0) && (A % (B * B * B) != 0))
        {
            cout << B << "\n";
        }
    }*/


    //Task 5
    /*int A{}, A1{}, sum{};

    cout << "enter a: ";
    cin >> A;


    if (A < 0) A = -A;
        A1 = A;

    while (A > 0)
    {
        sum += A % 10;
        A /= 10;
    }

    if (sum * sum * sum == A1 * A1)
        cout << "YES\n";

    else cout << "NO\n";*/



    //Task 5
   /* int divider = 2, num1;

    cout << "enter num1 ";
    cin >> num1;
    cout << "here: ";
    while (divider <= num1)
    {
        if (num1 % divider == 0)
        {
            cout << divider << " ";
        }
        divider++;
    }
    cout << endl;*/



    //Task 6
    /*int divider = 2, num1, num2;

    cout << "enter num1 ";
    cin >> num1;
    cout << "enter num2: ";
    cin >> num2;
    cout << "here: ";
    while (divider <= num1 || divider <= num2)
    {
        if (num1 % divider == 0 && num2 % divider == 0)
        {
            cout << divider << " ";
        }
        divider++;
    }
    cout << endl;
 */
    return 0;

}
