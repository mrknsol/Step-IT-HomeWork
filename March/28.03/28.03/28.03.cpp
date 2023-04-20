#include <iostream>
using namespace std;

#pragma region Task1
//template <typename T>
//void max(T arr[], const int length, T &min, T &max)
//{
//	int max = arr[0], min = arr[0];
//
//	for (size_t i = 0; i < length; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	cout << "Minimum: " << min;
//	cout << "Maximum: " << max;
//}
//
//int main()
//{
//	int maximum{}, minimum{};
//	int numbers[5]{};
//
//	srand(time(0));
//	for (size_t i = 0; i < 5; i++)
//	{
//		numbers[i] = rand() % 10 + 1;
//	}
//
//	max(numbers, 5, maximum, minimum);
//
//	return 0;
//}
#pragma endregion 

#pragma region Task2
//template <typename T>
//void average(T arr[], const int length, T &sum)
//{
//	for (size_t i = 0; i < length; i++)
//	{
//		sum += arr[i];
//	}
//	sum /= length;
//
//	cout << sum;
//}
//
//int main()
//{
//	int sum{};
//	int numbers[5]{};
//
//	srand(time(0));
//	for (size_t i = 0; i < 5; i++)
//	{
//		numbers[i] = rand() % 10 + 1;
//	}
//
//	average(numbers, 5, sum);
//
//	return 0;
//}
#pragma endregion 

#pragma region Task3
//template <typename T>
//void fact(T num, int &factorial)
//{
//	num = static_cast <int> (num);
//
//	for (size_t i = 1; i <= num; i++)
//	{
//		factorial *= i;
//	}
//
//	cout << factorial;
//}
//
//int main()
//{
//	int factorial = 1;
//	int number = 3;
//
//	fact(3, factorial);
//	return 0;
//}
#pragma endregion

#pragma region Task4
//template <typename T>
//void fact(T num[], int factorial, int sum, const int length)
//{
//	num = static_cast <int> (num);
//
//	for (size_t i = 0; i < length; i++)
//	{
//		for (size_t i = 1; i <= num[i]; i++)
//		{
//			factorial *= i;
//		}
//		sum += factorial;
//		factorial = 1;
//	}
//
//	cout << sum;;
//}
//
//int main()
//{
//	int factorial = 1, sum{};
//	int numbers[5]{};
//	const int length = 5;
//
//	srand(time(0));
//	for (size_t i = 0; i < length; i++)
//	{
//		numbers[i] = rand() % 10 + 1;
//	}
//
//	fact(numbers, factorial, sum, length);
//
//	return 0;
//}
#pragma endregion 
