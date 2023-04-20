#include <iostream>
using namespace std;

#pragma region Task1
//int getLengthofName(char* name) {
//	int i = 0;
//	while (name[i] != '\0') {
//		++i;
//	}
//	return i;
//}
//
//int getLengthofSurName(char* surname) {
//	int i = 0;
//	while (surname[i] != '\0') {
//		++i;
//	}
//	return i;
//}

//int mystrcmp(char* name,char* surName)
//{
//	if (getLengthofName(name) > getLengthofSurName(surName))
//	{
//		return 1;
//	}
//	else if (getLengthofName(name) < getLengthofSurName(surName))
//	{
//		return -1;
//	}
//	else if (getLengthofName(name) == getLengthofSurName(surName))
//	{
//		return 0;
//	}
//}

//int main() {
//	char* name = new char[30]{};
//	char* surName = new char[30] {};
//
//	cout << "Enter Name: ";
//	cin.getline(name, 29);
//
//	cout << "Enter SurName: ";
//	cin.getline(surName, 29);
//
//	cout << mystrcmp(name, surName) << endl;
//
//}
#pragma endregion



#pragma region Task2

//void function(char* name, int length) {
//	int* data = new int[length];
//	for (size_t i = 0; i < length; i++)
//	{
//		data[i] = (int)name[i];
//	}
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << data[i] << endl;
//	}
//}
//
//
//int main() {
//
//	int length{};
//	cout << "Enter Length: "; cin >> length;
//	
//	char* name = new char[length] {};
//	cin.ignore();
//	cout << "enter: ";
//	cin.getline(name, length + 1);
//
//	function(name, length);
//
//}


#pragma endregion



#pragma region Task3

//void function(int* name, int length) {
//	char* data = new char[length];
//	for (size_t i = 0; i < length; i++)
//	{
//		data[i] = (char)name[i];
//	}
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << data[i];			
//	}
//}
//
//
//int main() {
//
//	int length{};
//	cout << "enter length: "; cin >> length;
//
//	int* name = new int[length] {};
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << "enter: "; cin >> name[i];
//	}
//
//	function(name, length);
//}

#pragma endregion


#pragma region Task4

//void lowertoupper(char* data, int length) {
//	data[0] = char((int)data[0] - 32);
//
//	for (size_t i = 1; i < length; i++)
//	{
//		if (data[i] == ' ')
//		{
//			data[i + 1] = char((int)data[i + 1] - 32);
//		}
//	}
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << data[i];
//	}
//
//}
//
//
//int main() {
//
//	int length{};
//	cout << "enter length: "; cin >> length;
//
//
//	char* data = new char[length] {};
//	cin.ignore();
//	cout << "enter: "; cin.getline(data, length);
//
//	lowertoupper(data, length);
//}


#pragma endregion



#pragma region Task5

//void uppertolower(char* data, int length) {
//	data[0] = char((int)data[0] + 32);
//
//	for (size_t i = 1; i < length; i++)
//	{
//		if (data[i] == ' ')
//		{
//			data[i + 1] = char((int)data[i + 1] + 32);
//		}
//	}
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << data[i];
//	}
//
//}
//
//
//int main() {
//
//	int length{};
//	cout << "enter length: "; cin >> length;
//
//
//	char* data = new char[length] {};
//	cin.ignore();
//	cout << "enter: "; cin.getline(data, length);
//
//	uppertolower(data, length);
//}
//

#pragma endregion

