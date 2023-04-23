#include <iostream>
using namespace std;

#pragma region Task1
//char* Caesar(char word[], int shift, int direction)
//{
//	for (size_t i = 0; i < 11; i++)
//	{
//		if (word[i] == '\0')
//			break;
//		if (direction == 1)
//		{
//			if ((int)word[i] > 64 && (int)word[i] < 91)
//			{
//				int tmp = (int)word[i] + shift;
//				while (tmp > 90)
//				{
//					tmp = tmp - 90 + 64;
//				}
//				word[i] = (char)tmp;
//			}
//			else if ((int)word[i] > 96 && (int)word[i] < 123)
//			{
//				int tmp = (int)word[i] + shift;
//
//				while (tmp < 122)
//				{
//					tmp = tmp - 122 + 96;
//				}
//				word[i] = (char)tmp;
//			}
//		}
//		else if (direction == 2)
//		{
//			int tmp = (int)word[i] - shift;
//			if ((int)word[i] > 64 && (int)word[i] < 91)
//			{
//				while (tmp < 65)
//				{
//					tmp = 64 - tmp;
//					tmp = 90 - tmp;
//				}
//				word[i] = (char)tmp;
//			}
//			else if ((int)word[i] > 96 && (int)word[i] < 123)
//			{
//				int tmp = (int)word[i] - shift;
//
//				while (tmp < 97)
//				{
//					tmp = 96 - tmp;
//					tmp = 122 - tmp;
//				}
//				word[i] = (char)tmp;
//			}
//		}
//	}
//	return word;
//}
//int main() {
//	char word[31] {};
//	int shift, direction{};
//
//	cout << "Enter word: ";
//	cin.getline(word, 10);
//	cout << "Enter shift: ";
//	cin >> shift;
//
//	cout
//		<< "1.For Right" << endl
//		<< "2.For Left" << endl
//		<< "Enter: ";
//	cin >> direction;
//
//	cout << Caesar(word, shift, direction) << endl;
//	cout << word;
//}

#pragma endregion


#pragma region Task2

int main() {
	char** words = new char* [3];
	words[0] = new char[11] {};
	words[1] = new char[11] {};
	words[2] = new char[11] {};

	for (size_t i = 0; i < 3; i++)
	{
		cout << "Enter " << i + 1 << " word: ";
		cin.getline(words[i], 10);
	}

	//Bubble sort
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if ((int)words[i] < (int)words[j])
			{
				char* r = words[i];
				words[i] = words[j];
				words[j] = r;
			}
		}
	}

	//Insertion sort
	/*int i, tmp, j;
	for (i = 1; i < 3; i++)
	{
		tmp = (int)words[i][0];
		j = i - 1;

		while (j >= 0 && (int)words[j][0] > tmp)
		{
			words[j + 1] = words[j];
			j = j - 1;
		}
		words[j + 1] = words[i];
	}*/

	for (size_t i = 0; i < 3; i++)
	{
		cout << words[i] << endl;
	}
#pragma endregion

}

#pragma endregion
