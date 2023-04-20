#include <iostream>
using namespace std;
#pragma region Task1
//int powInnumber(int number, int powNum)
//{
//    if ( powNum == 0 )
//        return 1;
//    if ( powNum == 1 )
//        return number;
//    int result = number;
//    for ( int i = 0; i < powNum - 1; i++ )
//        result *= number;
//    return result;
//}
//int main()
//{
//    int number, powNum;
//    cout << "Enter number : ";
//    cin >> number;
//    cout << "Enter pow : ";
//    cin >> powNum;
//    cout << "Rezultat = " << powInnumber(number, powNum) << endl;
//}
#pragma endregion


#pragma region Task2
//void function(int num1, int num2)
//{
//
//    int sum=0;
//    if (num1<num2)
//    {
//        int i=num1+1;
//        while (i<num2)
//        {
//            sum+=i;
//            i++;
//        }
//        cout<<"sum is "<<sum<<endl;
//    }
//    else if (num1>num2)
//    {
//        int i=num2+1;
//        while (i<num1)
//        {
//            sum+=i;
//            i++;
//        }
//        cout<<"sum is "<<sum<<endl;
//    }
//    else
//    {
//        cout<<"sum is "<<sum<<endl;
//    }
//}
//int main()
//{
//    int number1{};
//    int number2{};
//    cout<<"enter first number: ";
//    cin>>number1;
//    cout<<"enter second number: ";
//    cin>>number2;
//    function(number1,number2);
//    return 0;
//}
//
#pragma endregion


#pragma region Task3
//int digit(int num1, int num2)
//{
//    for (int i = num1; i<num2; i++)
//    {
//        int result = 0;
//        for (int j = 1; j<i; j++)
//        {
//            if ((i%j) == 0)
//            {
//                result += j;
//            }
//        }
//        if (result == i && result)
//        {
//            return result;
//        }
//    }
//}
//
//int main()
//{
//    int number1{},number2{};
//    cout << "enter number1: ";
//    cin >> number1;
//    cout << "enter number2: ";
//    cin >> number2;
//    int res = digit(number1, number2);
//    cout << res << " \n";
//}
#pragma endregion


#pragma region Task5
//int isHappy(unsigned int num)
//{
//    if (num < 100000 || num > 999999)
//        return -1;
//    return ((num/100000) + ((num / 10000) % 10) + ((num / 1000) % 10)) == (((num / 100) % 10) + ((num / 10) % 10) + (num % 10));
//}
//
//int main()
//{
//    int number{};
//    cout << "enter number: ";
//    cin >> number;
//    int res = isHappy(number);
//    if (res == 1)
//        cout << "happy" << endl;
//    else if (res == 0)
//        cout << "not happy" << endl;
//    else
//        cout << "error" << endl;
//}
//

#pragma endregion
