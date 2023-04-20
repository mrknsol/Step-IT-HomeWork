#pragma region Task1_19

//int M{}, N{}, OB{}, k{};
//int *arr1 = new int[M];
//int *arr2 = new int[N];
//
//cout << "Enter length of first array: ";
//cin >> M;
//cout << "Enter length of second array: ";
//cin >> N;
//cout << endl;
//srand(time(NULL));
//
//cout << "First array: " << endl;
//for (int i = 0; i < M; i++)
//{
//    arr1[i] = rand() % 9 + 1;
//    cout <<  arr1[i] << " ";
//}
//cout << endl << endl;
//
//cout << "Second array: " << endl;
//for (int i = 0; i < N ; i++)
//{
//    arr2[i] = rand() % 9 + 1;
//    cout <<  arr2[i] << " ";
//}
//cout << endl;
//
//for (int i = 0; i < M; i++)
//{
//    int proverka{};
//    for (int j = 0; j < N; j++)
//    {
//        if (arr1[i] == arr2[j])
//        {
//            proverka++;
//        }
//    }
//    if (proverka == 0)
//        OB++;
//}
//
//int *arrOB = new int[OB];
//
//for (int i = 0; i < M; i++)
//{
//    int proverka{};
//    for (int j = 0; j < N; j++)
//    {
//        if (arr1[i] == arr2[j])
//        {
//            proverka++;
//        }
//    }
//        if (proverka == 0)
//        {
//            arrOB[k] = arr1[i];
//            k++;
//        }
//}
//
//cout << endl;
//cout << "Third array : " << endl;
//for (int i = 0; i < OB; i++)
//{
//    cout << arrOB[i] << " ";
//}
//cout << endl;
//for (int i = 0; i < OB; i++)
//{
//    for (int l = i + 1; l < OB; l++) {
//        if (arrOB[i] == arrOB[l]) {
//            for (int j = l; j < OB - 1; j++) {
//                arrOB[j] = arrOB[j + 1];
//            }
//            OB--;
//        }
//    }
//}
//cout << endl;
//cout << "Third array without repeat: " << endl;
//for (int i = 0; i < OB; i++)
//{
//    cout << arrOB[i] << " ";
//}

#pragma endregion Task1_19

#pragma region Task2_19

//    int M{}, N{}, OB{}, k{};
//    int *arr1 = new int[M];
//    int *arr2 = new int[N];
//
//    cout << "Enter length of first array: ";
//    cin >> M;
//    cout << "Enter length of second array: ";
//    cin >> N;
//    cout << endl;
//    srand(time(NULL));
//
//    cout << "First array: " << endl;
//    for (int i = 0; i < M; i++)
//    {
//        arr1[i] = rand() % 9 + 1;
//        cout <<  arr1[i] << " ";
//    }
//    cout << endl << endl;
//
//    cout << "Second array: " << endl;
//    for (int i = 0; i < N ; i++)
//    {
//        arr2[i] = rand() % 9 + 1;
//        cout <<  arr2[i] << " ";
//    }
//    cout << endl;
//
//    for (int i = 0; i < M; i++)
//    {
//        int proverka{};
//        for (int j = 0; j < N; j++)
//        {
//            if (arr1[i] == arr2[j])
//            {
//                proverka++;
//            }
//        }
//        if (proverka == 0)
//            OB++;
//    }
//
//    for (int i = 0; i < N; i++)
//    {
//        int proverka{};
//        for (int j = 0; j < M; j++)
//        {
//            if (arr2[i] == arr1[j])
//            {
//                proverka++;
//            }
//        }
//        if (proverka == 0)
//            OB++;
//    }
//
//    int *arrOB = new int[OB]{};
//
//    for (int i = 0; i < M; i++)
//    {
//        int proverka{};
//        for (int j = 0; j < N; j++)
//        {
//            if (arr1[i] == arr2[j])
//            {
//                proverka++;
//            }
//        }
//        if (proverka == 0)
//        {
//            arrOB[k] = arr1[i];
//            k++;
//        }
//    }
//
//    for (int i = 0; i < N; i++)
//    {
//        int proverka{};
//        for (int j = 0; j < M; j++)
//        {
//            if (arr2[i] == arr1[j])
//            {
//                proverka++;
//            }
//        }
//        if (proverka == 0)
//        {
//            arrOB[k] = arr2[i];
//            k++;
//        }
//    }
//
//    cout << endl;
//    cout << "Third array : " << endl;
//    for (int i = 0; i < OB; i++)
//    {
//        cout << arrOB[i] << " ";
//    }
//    cout << endl;
//
//    for (int i = 0; i < OB; i++)
//    {
//        for (int l = i + 1; l < OB; l++)
//        {
//            if (arrOB[i] == arrOB[l])
//            {
//                for (int j = l; j < OB - 1; j++)
//                {
//                    arrOB[j] = arrOB[j + 1];
//                }
//                OB--;
//            }
//        }
//    }
//    cout << endl;
//    cout << "Third array without repeat: " << endl;
//    for (int i = 0; i < OB; i++)
//    {
//        cout << arrOB[i] << " ";
//    }
#pragma endregion Task2_19

