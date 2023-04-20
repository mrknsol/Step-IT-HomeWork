#include <iostream>
using namespace std;

#pragma region Task1
//int main()
//{
//	int numbers[3][5]{ 
//		{1, 8, 13, 0 ,84},
//		{5, -4, 51, 17, 1}, 
//		{9, 11, -8, 15, 0 } 
//	};
//
//	int sum{}, count{};
//	int min = numbers[0][0], max = numbers[0][0];
//
//	for (size_t i = 0; i < 3; i++)
//	{
//		for (size_t j = 0; j < 5; j++)
//		{
//			sum += numbers[i][j];
//			count++;
//		}
//		for (size_t a = 0; a < 5; a++)
//		{
//			if (min > numbers[i][a])
//			{
//				min = numbers[i][a];
//			}
//		}
//		for (size_t b = 0; b < 5; b++)
//		{
//			if (max < numbers[i][b])
//			{
//				max = numbers[i][b];
//			}
//		}
//	}
//	cout << "Sum: " << sum << endl;
//	cout << "Average: " << (float)sum / count << endl;
//	cout << "Minimum number of all numbers: " << min << endl;
//	cout << "Maximum number of all numbers: " << max;
//
//	return 0;
//}
#pragma endregion 

#pragma region Task2
//int main()
//{
//	int numbers[3][4]{
//		{3, 5, 6, 17},
//		{12, 1, 1, 1},
//		{0, 7, 12, 1}
//	};
//
//	for (size_t i = 0; i < 3; i++)
//	{
//		int sum{};
//
//		for (size_t j = 0; j < 4; j++)
//		{
//			sum += numbers[i][j];
//		}
//
//		for (size_t b = 0; b < 4; b++)
//		{
//			cout << numbers[i][b] << "  ";
//		}
//		cout << "| " << sum << endl;
//	}
//	for (size_t i = 0; i < 17; i++)
//	{
//		cout << '-';
//	}
//	cout << endl;
//
//	int allsum{};
//
//	for (size_t i = 0; i < 4; i++)
//	{
//		int sum{};
//
//		sum = numbers[0][i] + numbers[1][i] + numbers[2][i];
//		allsum += sum;
//
//		cout << sum << ' ';
//	}
//	cout << " | " << allsum;
//
//	return 0;
//}
#pragma endregion

#pragma region Task3
//int main()
//{
//	int numbers[5][10]{};
//	int numbers2[5][5]{};
//
//	srand(time(0));
//	for (size_t i = 0; i < 5; i++)
//	{
//		for (size_t j = 0; j < 10; j++)
//		{
//			numbers[i][j] = rand() % 50;
//		}
//	}
//
//	for (size_t i = 0; i < 5; i++)
//	{
//		for (size_t j = 0,a = 0; j < 9;a++, j += 2)
//		{
//			numbers2[i][a] = numbers[i][j] + numbers[i][j + 1];
//		}
//	}
//
//	return 0;
//}
#pragma endregion


