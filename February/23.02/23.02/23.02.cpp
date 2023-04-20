#pragma region Task1

//int arr[2][6]{};
//int num{ 2 };
//
//for (int i = 0; i < 6; i++)
//{
//	num = arr[0][i] = num * 2;
//}
//for (int i = 0; i < 6; i++)
//{
//	num = arr[1][i] = num * 2;
//}
//for (int i = 0; i < 6; i++)
//{
//	cout << arr[0][i];
//}
//cout << "\n";
//for (int i = 0; i < 6; i++)
//{
//	cout << arr[1][i];
//}

#pragma endregion
#pragma region Task2
//int arr[2][6]{};
//int num{1};
//
//for (int i = 0; i < 6; i++)
//{
//	num = arr[0][i] = num++;
//}
//for (int i = 0; i < 6; i++)
//{
//	num = arr[1][i] = num++;
//}
//for (int i = 0; i < 6; i++)
//{
//	cout << arr[0][i];
//}
//cout << "\n";
//for (int i = 0; i < 6; i++)
//{
//	cout << arr[1][i];
//}
#pragma endregion
#pragma region Task3

//int arr[2][6]{}, arr2[2][6]{}, num1{ 1 }, num2{ 10 }, swipe{}, choice{}, j{};
//srand(time(0));
//
//for (int i = 0; i < 6; i++)
//{
//	arr[0][i] = rand() % (num2 - num1) + num1;
//	arr[1][i] = rand() % (num2 - num1) + num1;
//}
//
//for (int i = 0; i < 6; i++)
//{
//	cout << arr[0][i];
//	
//}
//cout << "\n";
//for (int i = 0; i < 6; i++)
//{
//	cout << arr[1][i];
//
//}
//cout << "\n";
//cout << "Выберите действие: \n1. Сдвиг в право \n2. Сдвиг в лево \n3. Сдвиг вверх \n4. Сдвиг вниз" << endl; 
//cin >> choice;
//switch (choice)
//{
//case 1:
//
//	cout << "Введите количество сдвигов вправо - "; cin >> swipe;
//	for (int i = 0; i < swipe; i++)
//	{
//		arr2[0][i] = arr[0][i + 6 - swipe];		
//		arr2[1][i] = arr[1][i + 6 - swipe];
//		j++;
//	}
//	for (int i = j; i < 6; i++)
//	{
//		arr2[0][i] = arr[0][i - j];		
//		arr2[1][i] = arr[1][i - j];				
//	}	
//	break;
//
//case 2:
//
//	cout << "Введите количество сдвигов влево - "; cin >> swipe;
//	for (int i = 0; i < 6 - swipe; i++)
//	{
//		arr2[0][i] = arr[0][i + swipe];
//		arr2[1][i] = arr[1][i + swipe];
//		j++;
//	}
//	for (int i = j; i < 6; i++)
//	{
//		arr2[0][i] = arr[0][i - j];
//		arr2[1][i] = arr[1][i - j];
//	}
//	break;
//
//case 3:
//
//	cout << "Введите количество сдвигов вверх - "; cin >> swipe;
//	for (int i = 0; i < 6; i++)
//	{
//		if (swipe % 2 != 0 && swipe != 0)
//		{
//			arr2[0][i] = arr[1][i];
//			arr2[1][i] = arr[0][i];
//		}
//		else
//		{
//			arr2[0][i] = arr[0][i];
//			arr2[1][i] = arr[1][i];
//		}
//	}
//
//	break;
//
//case 4:
//
//	cout << "Введите количество сдвигов вниз - "; cin >> swipe;
//
//	for (int i = 0; i < 6; i++)
//	{
//		if (swipe % 2 != 0 && swipe != 0)
//		{
//			arr2[0][i] = arr[1][i];
//			arr2[1][i] = arr[0][i];
//		}
//		else
//		{
//			arr2[0][i] = arr[0][i];
//			arr2[1][i] = arr[1][i];
//		}
//	}
//
//	break;
//
//default:
//	break;
//}
//
//for (int i = 0; i < 6; i++)
//{
//	cout << arr2[0][i];
//
//}
//cout << "\n";
//for (int i = 0; i < 6; i++)
//{
//	cout << arr2[1][i];
//
//}

#pragma endregion