
#pragma region Task1Funk14

//int** matrix(int row,int col)
//{
//    int** arr = new int*[row];
//    for (int i = 0; i < row; i++)
//        arr[i] = new int[col];
//    return arr;
//}
//
//int matrix(int **arr, int row, int col )
//{
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            arr[i][j] = rand() % 10;
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    cout << endl;
//return 0;
//}
//
//int matrix(int **arr,int row)
//{
//    int min = arr[0][0];
//    int max = arr[0][0];
//    for (int i = 0; i < row; i++) {
//        if (min > arr[i][i])
//            min = arr[i][i];
//        if (max < arr[i][i])
//            max = arr[i][i];
//    }
//    cout << "Minimun number: " << min << endl;
//    cout << "Maximum number: " << max << endl;
//    cout << endl;
//    return 0;
//}
//
//int matrix(int **arr, int row, int col, int b)
//{
//    for (int l = 0; l < row; l++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            for (int i = 0; i < col; i++)
//            {
//                if (arr[l][i] > arr[l][j])
//                {
//                    int tmp{};
//                    tmp = arr[l][j];
//                    arr[l][j] = arr[l][i];
//                    arr[l][i] = tmp;
//                }
//            }
//        }
//    }
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

#pragma endregion Task1Funk14

#pragma region Task2_14Funk

//int maximumFunk(int num1, int num2)
//{
//    if (num2 == 0)
//        return num1;
//    else if (num1 == 0)
//        return num2;
//    if (num1 > num2)
//        return maximumFunk(num2, num1 % num2);
//    else if (num2 > num1)
//        return maximumFunk(num1, num2 % num1);
//
//}

#pragma endregion Task2_14Funk

#pragma region Task3_14Funk
//void bullscows(int bulls[], int cows[], int i)
//{
//    static int nums{}, count{};
//
//	if (bulls[i] == cows[i])
//	{
//		nums++;
//	}
//
//	if (i == 3)
//	{
//		if (nums == 4)
//		{
//			count++;
//			cout << "You guessed right in " << count <<  " attempts!";
//		}
//		else
//		{
//			cout << "You gussed number: " << nums << endl;
//			cout << "Please re-enter: ";
//			for (size_t i = 0; i < 4; i++)
//			{
//				cout << "Enter number " << i + 1 << ':'; cin >> cows[i];
//			}
//			count++;
//			i = -1;
//			nums = 0;
//		}
//	}
//
//	bullscows(bulls, cows, i + 1);
//}

#pragma endregion Task3_14Funk

int main() {

#pragma region Task1_14
	//int sum{};
	//const int row = 5;
	//const int col = 5;
	//int number = col;
	//int** arr = matrix(row, col);
	//
	//srand(time(NULL));
	//
	//matrix(arr, row, col);
	//
	//matrix(arr, row);
	//
	//matrix(arr, row, col, 0);
	//


#pragma endregion Task1_14

#pragma region Task2_14
//
//int num1 = 140, num2 = 96;
//
//cout << "Max: " << maximumFunk(num2, num1 % num2);


#pragma endregion Task2_14

#pragma region Task3_14

//    int bulls[4]{}, cows[4]{};
//
//    srand(time(NULL));
//    for (size_t i = 0; i < 4; i++)
//    {
//        bulls[i] = rand() % 10 + 1;
//    }
//
//    for (size_t i = 0; i < 4; i++)
//    {
//        cout << "Enter number " << i + 1 << ':'; cin >> cows[i];
//    }
//
//    bullscows(bulls, cows, 0);


#pragma endregion Task3_14
