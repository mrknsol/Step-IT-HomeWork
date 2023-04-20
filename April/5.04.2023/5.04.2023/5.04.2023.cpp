#include <iostream>
using namespace std;
#pragma region Task1
//
//void function(char &data, int length) {
//    for (size_t i = 0; i < length; i++)
//    {
//            if (data[i] == ' ')
//            {
//                data[i] = '\t';
//            }
//    }
//}
//
//
//int main() {
//    int length{};
//    cout << "Enter length: "; cin >> length;
//
//    cin.ignore();
//    char data = new char[length]{};
//    cin.getline(data, length);
//
//    function(data, length);
//
//    for (size_t i = 0; i < length; i++)
//    {
//        cout << data[i];
//    }
//
//    return 0;
//}
#pragma endregion

#pragma region Task2
//int main()
//{
//	int count_of_letters{}, count_of_numbers{}, count_of_symbols{};
//	char* data = new char[30] {};
//	cout << "Enter: ";
//	cin.getline(data, 30);
//	for (size_t i = 0; i < 30; i++)
//	{
//		if (data[i] > 64 && data[i] < 91 || data[i] > 96 && data[i] < 123)
//		{
//			count_of_letters++;
//		}
//		if (data[i] > 47 && data[i] < 58)
//		{
//			count_of_numbers++;
//		}
//		if (data[i] > 32 && data[i] < 48 || data[i] > 57 && data[i] < 65 || data[i] > 90 && data[i] < 97 || data[i] > 122 && data[i] < 127)
//		{
//			count_of_symbols++;
//		}
//
//	}
//	cout << count_of_letters << " letters" << endl;
//	cout << count_of_numbers << " numbers" << endl;
//	cout << count_of_symbols << " symbols" << endl;
//}
#pragma endregion

#pragma region Task3

int main()
{
	int length{ 300 }, count{};
	char* data = new char[length] {};
	cout << "Enter: ";
	cin.getline(data, length);

	for (size_t i = 0; i < length; i++)
	{
		if (data[i] == ' ')
		{
			count++;
		}
	}
	count++;

	cout << "Count of Words is: " << count;
}


#pragma endregion

#pragma region Task4

//int main()
//{
//	int length{ 300 }, count{}, count1{}, i{};
//	setlocale(LC_ALL, "ru");
//	char* data = new char[length] {};
//	char* data_reverse = new char[length] {};
//
//	cout << "Введите предложение ";
//	cin.getline(data, length);
//
//	while (data[i] != '\0')
//	{
//		count++;
//		i++;
//	}
//	count1 = count;
//	for (size_t i = 0; i < count; i++)
//	{
//		data_reverse[i] = data[count1 - 1];
//		count1--;
//	}
//	i = 0;
//	for (size_t i = 0; i < count; i++)
//	{
//		if (data[i] == data_reverse[i])
//		{
//			i++;
//		}
//	}
//	if (i == count)
//	{
//		for (size_t i = 0; i < count; i++)
//		{
//			cout << data[i];
//		}
//		cout << "it is palindrom" << endl;
//
//	}
//	else
//	{
//		for (size_t i = 0; i < count; i++)
//		{
//			cout << data[i];
//		}
//		cout << "it isn't palindrom" << endl;
//	}
//}
#pragma endregion
