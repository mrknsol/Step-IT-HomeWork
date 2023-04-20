#include <iostream>
using namespace std;
//bool vys (int year)
//{
//    bool res=false;
//    if (year%4==0)
//        res=true;
//    if (year%100==0)
//        res=false;
//    if (year%400==0)
//        res=true;
//    return res;
//}
//int date (int day, int month, int year)
//{
//    int k=day;
//    if (vys(year)&&(month>2))
//        k+=year*366;
//    else k+=year*365;
//    switch(month-1)
//    {
//        case 12: k += 31;
//        case 11: k += 30;
//        case 10: k += 31;
//        case  9: k += 30;
//        case  8: k += 31;
//        case  7: k += 31;
//        case  6: k += 30;
//        case  5: k += 31;
//        case  4: k += 30;
//        case  3: k += 31;
//        case  2: k += 28;
//        case  1: k += 31;
//    }
//    return k;
//}
//int difference (int day1, int day2, int mon1, int mon2, int year1, int year2)
//{
//    int k = date(day2, mon2, year2) - date(day1, mon1, year1) + 1;
//    return k;
//}
//int main()
//{
//    int d1, d2, m1, m2, y1, y2;
//    cout << "Input first day: ";
//    cin >> d1;
//    cout << "Input first month: ";
//    cin >> m1;
//    cout << "Input first year: ";
//    cin >> y1;
//    cout << "Input second day: ";
//    cin >> d2;
//    cout << "Input second month: ";
//    cin >> m2;
//    cout << "Input second year: ";
//    cin >> y2;
//    cout << "Here: " << difference(d1, d2, m1, m2, y1, y2) << " days";
//}

//int function(int arrr[],int result,int countt,int summa){
//    for (int i = 0; i < 10; ++i) {
//        summa += arrr[i];
//        countt += 1;
//    }
//    result = summa * countt;
//    return result;
//}
//
//int main(){
//    int arr[10]{5,3,2,3,4,5,2,1,8,5};
//    int res{};
//    int count{};
//    int sum{};
//
//    cout << function(arr,res,count,sum);
//}

//void findNegPos(int arrr[],int neg,int pos,int nei){
//    for (int i = 0; i < 10; ++i) {
//        if (arrr[i] > 0){
//            pos += 1;
//        }
//        else if (arrr[i] < 0){
//            neg += 1;
//        }
//        else if (arrr[i] == 0) {
//            nei += 1;
//        }
//    }
//    cout << neg << '\n' << pos << '\n' << nei;
//}
//
//
//int main(){
//    int arr[10]{5,3,-1,3,5,2,-3,-3,4,-1};
//    int negative{};
//    int positive{};
//    int neitral{};
//
//    findNegPos(arr,negative,positive,neitral);
//
//}
