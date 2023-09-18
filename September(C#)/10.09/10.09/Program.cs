#region Task1

// Array arr = new Array(new List<int>{5,4,3,15,19,10});
//
//
// Console.WriteLine(arr.Less(10));
// Console.WriteLine(arr.Greater(15));
//
// class Array : ICalc
// {
//     public List<int> ArrList = new List<int>();
//     public Array(IEnumerable<int> value)
//     {
//         ArrList = new List<int>(value);
//     }
//
//     public int Less(int valueToCompare)
//     {
//         int countValue = 0;
//         for (int i = 0; i < ArrList.Count; i++)
//         {
//             if (ArrList[i] < valueToCompare)
//                 countValue++;
//         }
//
//         return countValue;
//     }
//
//     public int Greater(int valueToCompare)
//     {
//         int countValue = 0;
//         for (int i = 0; i < ArrList.Count; i++)
//         {
//             if (ArrList[i] > valueToCompare)
//                 countValue++;
//         }
//
//         return countValue;
//     }
//
//     public void Add(int value)
//     {
//         ArrList.Add(value);
//     }
//
//     public void Info()
//     {
//         for (int i = 0; i < ArrList.Count(); i++)
//         {
//             Console.WriteLine(ArrList[i]);
//         }
//     }
// }
//
//
// interface ICalc
// {
//     public int Less(int valueToCompare);
//     public int Greater(int valueToCompare);
// }

#endregion

#region Task2
//
// Array nums = new Array(new List<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
//
//
// nums.ShowOdd();
// nums.ShowEven();
//
// class Array : IOutput2
// {
//     public List<int> ArrList = new List<int>();
//     public Array(IEnumerable<int> value)
//     {
//         ArrList = new List<int>(value);
//     }
//
//     public void ShowOdd()
//     {
//         for (int i = 0; i < ArrList.Count(); i++)
//         {
//             if (ArrList[i] % 2 != 0)
//                 Console.WriteLine(ArrList[i]);
//         }
//     }
//
//     public void ShowEven()
//     {
//         for (int i = 0; i < ArrList.Count(); i++)
//         {
//             if (ArrList[i] % 2 == 0)
//                 Console.WriteLine(ArrList[i]);
//         }
//     }
//
//     
//     public void Add(int value)
//     {
//         ArrList.Add(value);
//     }
//
//     public void Info()
//     {
//         for (int i = 0; i < ArrList.Count(); i++)
//         {
//             Console.WriteLine(ArrList[i]);
//         }
//     }
//     
//     
// }
//
// interface IOutput2
// {
//
//     void ShowEven();
//     void ShowOdd();
//
// }

#endregion

#region Task3

// Array arrNums = new Array(new List<int>{1, 2 ,3, 4, 4, 5, 6, 7, 8, 9, 1, 5, 7, 10, 10});
//
// Console.WriteLine(arrNums.EqualToValue(10));
// Console.WriteLine(arrNums.CountDistinct());
// arrNums.Info();
//
//
// class Array : ICalc2
// {
//     public List<int> ArrList = new List<int>();
//
//
//     public Array(IEnumerable<int> value)
//     {
//         ArrList = new List<int>(value);
//     }
//
//
//     public int EqualToValue(int valueToCompare)
//     {
//         int countValue = 0;
//         for (int i = 0; i < ArrList.Count(); i++)
//         {
//             if (ArrList[i] == valueToCompare)
//             {
//                 countValue++;
//             }
//         }
//
//         return countValue;
//     }
//
//     public int CountDistinct()
//     {
//         int countUnical = 0;
//         int j = 0;
//         for (int i = 0; i < ArrList.Count(); i++)
//         {
//             if (ArrList[i] == ArrList[j])
//                 countUnical++;
//             j++;
//
//         }
//         return countUnical;
//     }
//
//     public void Add(int value)
//     {
//         ArrList.Add(value);
//     }
//
//     public void Info()
//     {
//         for (int i = 0; i < ArrList.Count(); i++)
//         {
//             Console.WriteLine(ArrList[i]);
//         }
//     }
// }
// interface ICalc2
// {
//     int CountDistinct();
//     int EqualToValue(int valueToCompare);
// }

#endregion