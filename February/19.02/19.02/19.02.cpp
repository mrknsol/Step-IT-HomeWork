#include <iostream>
using namespace std;

int main()
{
#pragma region Task1
    /*srand(time(0));

    int arr[10];

    for (size_t i = 0; i < 10; i++)
    {
        int random = rand() % 100 + 1;
        arr[i] = random;
        cout << arr[i] << endl;
    }*/

    /*int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << endl << "Max: " << max << endl << "Min: " << min;*/
#pragma endregion


#pragma region Task2
    /*srand(time(0));

    int arr[10];
    int choice{}, sum{};
    cin >> choice;

    for (size_t i = 0; i < 10; i++)
    {
        int random = rand() % 100 + 1;
        arr[i] = random;
    }

    for (size_t i = 0; i < 10; i++)
    {
        if (i < choice)
        {
            sum += i;
        }
        arr[i];
    }
    cout << sum;*/

#pragma endregion
#pragma region Task3


    int diap1{}, diap2{};
    const int lenght = 12;
    int arr[lenght];


    for (int i = 0; i < lenght; i++)
    {
        cout << "Enter the income:" << endl;
        cin >> arr[i];
    }
    int max = arr[0], min = 999999;

    cout << "Please, enter the range:" << endl;
    cin >> diap1 >> diap2;

    for (int j = diap1 - 1; j < diap2; j++)
    {
        if (min > arr[j])
            min = arr[j];

        if (max < arr[j])
            max = arr[j];
    }
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

#pragma endregion
    return 0;
}
