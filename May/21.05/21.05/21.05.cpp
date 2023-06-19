#include <iostream>
using namespace std;

class Fraction {
public:
    int numerator{};
    int denominator{};
    Fraction() = default;
    Fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void operator +(Fraction other) {
        numerator + other.numerator;
    }

    void operator -(Fraction other) {
        numerator - other.numerator;
    }

    void operator *(Fraction other) {
        numerator * other.numerator;
        denominator * other.denominator;
    }

    void add(Fraction other)
    {
        int num{ 1 }, counter1{}, counter2{};
        while (true)
        {
            if ((num % denominator == 0) && (num % other.denominator == 0))
            {
                break;
            }
            else {
                num++;
            }
        }
        counter1 = num / denominator;
        counter2 = num / other.denominator;
        numerator = numerator * counter1;
        other.numerator = other.numerator * counter2;
        numerator = (numerator + other.numerator);
        denominator = num;
        if (numerator == denominator)
        {
            cout << "Result: 1" << endl;
        }
        else {
            cout << "Result: " << numerator << '/' << denominator;
        }
    }
    void difference(Fraction other) {
        int num{ 1 }, counter1{}, counter2{};
        while (true)
        {
            if ((num % denominator == 0) && (num % other.denominator == 0))
            {
                break;
            }
            else {
                num++;
            }
        }
        counter1 = num / denominator;
        counter2 = num / other.denominator;
        numerator = numerator * counter1;
        other.numerator = other.numerator * counter2;
        numerator = (numerator - other.numerator);
        denominator = num;
        if (numerator == denominator)
        {
            cout << "Result: 1" << endl;
        }
        else {
            cout << "Result: " << numerator << '/' << denominator;
        }
    }
    void multiplication(Fraction other)
    {
        int length{};
        if (numerator < denominator)
        {
            length = numerator;
        }
        else
        {
            length = denominator;
        }
        for (size_t i = length; i > 0; i--)
        {
            if ((numerator % i == 0) && (denominator % i == 0))
            {
                numerator /= i;
                denominator /= i;
                break;
            }
        }
        if (other.numerator < other.denominator)
        {
            length = other.numerator;
        }
        else
        {
            length = other.denominator;
        }
        for (size_t i = length; i > 0; i--)
        {
            if ((other.numerator % i == 0) && (other.denominator % i == 0))
            {
                other.numerator /= i;
                other.denominator /= i;
                break;
            }
        }
        if (other.numerator < denominator)
        {
            length = other.numerator;
        }
        else
        {
            length = denominator;
        }
        for (size_t i = length; i > 0; i--)
        {
            if ((other.numerator % i == 0) && (denominator % i == 0))
            {
                other.numerator /= i;
                denominator /= i;
                break;
            }
        }
        if (numerator < other.denominator)
        {
            length = numerator;
        }
        else
        {
            length = other.denominator;
        }
        for (size_t i = length; i > 0; i--)
        {
            if ((numerator % i == 0) && (other.denominator % i == 0))
            {
                numerator /= i;
                other.denominator /= i;
                break;
            }
        }
        (numerator *= other.numerator);
        (denominator *= other.denominator);
        if (numerator == denominator)
        {
            cout << "Result: 1" << endl;
        }
        else {
            cout << "Result: " << numerator << '/' << denominator;
        }
    }
    void division(Fraction other)
    {
        int length{}, num{};
        num = numerator;
        numerator = denominator;
        denominator = num;
         
        if (numerator < denominator)
        {
            length = numerator;
        }
        else
        {
            length = denominator;
        }
        for (size_t i = length; i > 0; i--)
        {
            if ((numerator % i == 0) && (denominator % i == 0))
            {
                numerator /= i;
                denominator /= i;
                break;
            }
        }
       
        if (other.numerator < other.denominator)
        {
            length = other.numerator;
        }
        else
        {
            length = other.denominator;
        }
        for (size_t i = length; i > 0; i--)
        {
            if ((other.numerator % i == 0) && (other.denominator % i == 0))
            {
                other.numerator /= i;
                other.denominator /= i;
                break;
            }
        }
       
        if (other.numerator < denominator)
        {
            length = other.numerator;
        }
        else
        {
            length = denominator;
        }
        for (size_t i = length; i > 0; i--)
        {
            if ((other.numerator % i == 0) && (denominator % i == 0))
            {
                other.numerator /= i;
                denominator /= i;
                break;
            }
        }
     
        if (numerator < other.denominator)
        {
            length = numerator;
        }
        else
        {
            length = other.denominator;
        }
        for (size_t i = length; i > 0; i--)
        {
            if ((numerator % i == 0) && (other.denominator % i == 0))
            {
                numerator /= i;
                other.denominator /= i;
                break;
            }

        }

        (numerator *= other.numerator);
        (denominator *= other.denominator);
        if (numerator == denominator)
        {
            cout << "Result: 1" << endl;
        }
        else {
            cout << "Result: " << numerator << '/' << denominator;
        }
    }
};

int main() {
    Fraction num1{}, num2{};
    int choice{};
    cout << "1. Sum" << endl
        << "2. Difference" << endl
        << "3. Multiplication" << endl
        << "4. Division" << endl
        << "Enter choice: ";
    cin >> choice;
    system("cls");
    cout << "Enter first numerator: ";
    cin >> num1.numerator;
    cout << "Enter second denominator: ";
    cin >> num1.denominator;
    cout << "Enter first numerator: ";
    cin >> num2.numerator;
    cout << "Enter second denominator: ";
    cin >> num2.denominator;
    system("cls");
    switch (choice)
    {
    case 1:
        num1.add(num2);
        break;
    case 2:
        num1.difference(num2);
        break;
    case 3:
        num1.multiplication(num2);
        break;
    case 4:
        num1.division(num2);
        break;
    default:
        break;
    }
    return 0;

}