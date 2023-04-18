#include <iostream>
using namespace std;

int main()
{
#pragma region Task1
		char* line = new char[101] {};
		char* replaceline = new char[101] {};
		char* replaceword = new char[11] {};
		char* replacement = new char[11] {};
	
		cout << "Enter line: "; cin.getline(line, 100);
		cout << "Enter replace word: "; cin.getline(replaceword, 10);
		cout << "Enter a replacement word: "; cin.getline(replacement, 10);
	
		int count{}, count2{};
		while (replaceword[count] != '\0')
		{
			count++;
		}
		while (replacement[count2] != '\0')
		{
			count2++;
		}
	
		int yes{};
		for (size_t i = 0, ex = 0; i < 100;)
		{
			if (line[i] == '\0')
				break;
			if ((int)line[i] > 64 && (int)line[i] < 91 || (int)line[i] == 32)
			{
				if ((int)line[i] == 32)
				{
					i++;
					ex++;
					replaceline[ex - 1] = line[i - 1];
				}
				for (size_t j = 0, v = i; j < count; j++, v++)
				{
					if (line[v] == replaceword[j])
					{
						yes++;
					}
				}
				if (yes == count)
				{
					for (size_t j = 0; j < count2; j++)
					{
						if (replacement[j] == '\0')
							replaceline[ex] = ' ';
						else
							replaceline[ex] = replacement[j];
						ex++;
					}
					int l{};
					while (l != count)
					{
						l++;
						i++;
					}
				}
				else
				{
					i++;
					ex++;
					replaceline[ex - 1] = line[i - 1];
				}
				yes = 0;
			}
			else
			{
				replaceline[ex] = line[i];
				i++;
				ex++;
			}
		}
		cout << replacement;
#pragma endregion

#pragma region Task2
	//char* line = new char[101];
	//cout << "Enter line: "; cin.getline(line, 100);

	//if ((int)line[0] > 96 && (int)line[0] < 123)
	//	line[0] = (int(line[0] - 32));

	//for (size_t i = 0; i < 102; i++)
	//{
	//	if (line[i] == '\0' || line[i + 1] == '\0')
	//		break;
	//	else if (line[i] == '.' || line[i] == '?' || line[i] == '!')
	//	{
	//		if(line[i + 1] == ' ')
	//			line[i + 2] = (int(line[i + 2] - 32));
	//		else
	//			line[i + 1] = (int(line[i + 2] - 32));
	//	}
	//}
	//cout << line;
#pragma endregion

#pragma region Task3
	//char* line = new char[101] {};
	//cout << "Enter line: "; cin.getline(line, 100);
	//int index[26]{};
	//for (size_t i = 97, j = 0; i < 123; i++, j++)
	//{
	//	index[j] = i;
	//}
	//int count[26]{};

	//for (size_t i = 0; i < 102; i++)
	//{
	//	if (line[i] == '\0')
	//		break;
	//	for (size_t j = 0; j < 26; j++)
	//	{
	//		if ((int)line[i] == index[j] || (int)line[i] + 32 == index[j])
	//		{
	//			count[j] += 1;
	//			break;
	//		}
	//	}
	//}

	//for (size_t i = 0; i < 26; i++)
	//{
	//	if (count[i] > 0)
	//	{
	//		cout << "Letter " << (char)index[i] << " met " << count[i] << " times." << endl;
	//	}
	//}
#pragma endregion

#pragma region Task4
	//char* line = new char[101] {};
	//cout << "Enter line: "; cin.getline(line, 100);
	//int count{};

	//for (size_t i = 0; i < 102; i++)
	//{
	//	if (line[i] == '\0')
	//		break;
	//	if ((int)line[i] > 47 && (int)line[i] < 58)
	//		count++;
	//}

	//cout << "Numbers met: " << count << " times." << endl;
#pragma endregion

	return 0;
}