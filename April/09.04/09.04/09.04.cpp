#include <iostream>
using namespace std;


int max(int* a, int* b, int len1, int len2)
{
	int max = a[0];
	for (size_t i = 1; i < len1; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	for (size_t i = 1; i < len2; i++)
	{
		if (max < b[i])
			max = b[i];
	}

	return max;
}

int min(int* a, int* b, int len1, int len2)
{
	int min = a[0];
	for (size_t i = 1; i < len1; i++)
	{
		if (min > a[i])
			min = a[i];
	}
	for (size_t i = 1; i < len2; i++)
	{
		if (min > b[i])
			min = b[i];
	}

	return min;
}

int avg(int* a, int* b, int len1, int len2)
{
	int sum{};
	for (size_t i = 0; i < len1; i++)
		sum += a[i];
	for (size_t i = 0; i < len2; i++)
		sum += b[i];

	return sum / (len1 + len2);
}



int (*Action[])(int*, int*, int, int) { max, min, avg };

int main()
{
	int length1{}, length2{};
	cout << "Enter length1 for A: "; cin >> length1; 
	
	cout << "Enter length2 for B: "; cin >> length2;

	int* A = new int[length1];
	int* B = new int[length2];

	for (size_t i = 0; i < length1; i++)
	{
		cout << "Enter number for A: ";
		cin >> A[i];
	}
	for (size_t i = 0; i < length2; i++)
	{
		cout << "Enter number for B: ";
		cin >> B[i];
	}

	int choice{};
	cout << "1 for Maximum" << endl;
	cout << "2 for Minumun" << endl;
	cout << "3 for Average" << endl;
	cin >> choice;

	cout << Action[choice - 1](A, B, length1, length2);

	return 0;
}