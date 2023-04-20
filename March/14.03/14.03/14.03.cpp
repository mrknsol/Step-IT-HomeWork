#include <iostream>
#include <string.h>
using namespace std;


void function(char** arr1, int len)
{
    char** arr3 = new char* [len] {};
    int* arr4 = new int [len] {};
    for (size_t i = 0; i < len; i++)
    {
        arr3[i] = arr1[i];
    }


    for (size_t i = 0; i < len; i++)
    {
        int index{};
        for (size_t j = 0; j < len; j++)
        {
            if (i == j)
                continue;
            int k{};
            while (int(arr1[i][k]) == int(arr1[j][k]))
            {
                k++;
            }
            if (int(arr1[i][k]) > int(arr1[j][k]))
                index++;
        }
        arr4[i] = index;
    }


    for (size_t i = 0; i < len; i++)
    {
        arr1[arr4[i]] = arr3[i];
    }



    for (size_t i = 0; i < len; i++)
    {
        cout << arr1[i] << ' ';
    }
}


int main()
{
    int len{}, j = 0;
    cout << "Enter length: "; cin >> len;
    char** arr = new char* [len] {};
    for (size_t i = 0; i < len; i++)
    {
        arr[i] = new char[10];
    }
    for (size_t i = 0; i < len; i++)
    {
        cout << "Enter " << j + 1 << " slovo: "; cin >> arr[i];
        j++;
    }
    function(arr, len);
}

