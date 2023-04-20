//#include <iostream>
//using namespace std;
//int main() {
//	int diap1{}, diap2{}, num{};
//	cout << "Enter num: ";
//	cin >> num;
//	cout << "enter diap1: ";
//	cin >> diap1;
//	cout << "enter diap2: ";
//	cin >> diap2;
//
//
//	for (; num < diap1 || num > diap2;)
//	{
//		cout << "Error!!" << endl;
//		cout << "re-enter: "; cin >> num;
//	}
//	cout << "Congratulate!!";
//	
//	return 0;
//
//}





//int main() {
//	float dolls_price = 4, candies_price = 6, notebooks_price = 699, books_price = 12, choice2{},
//		dolls_stock = 32, candies_stock = 23, notebooks_stock = 12, books_stock = 55,
//		dolls_count{}, candies_count{}, notebooks_count{}, books_count{}, discount{}, balance{};
//	bool yes_or_no{}, kassa = true;
//	int choice{};
//
//
//	while (kassa)
//	{
//		cout << "1 for Dolls:\t" << dolls_price << "\t\tGoods: " << dolls_stock << '\n' << "2 for Candies:\t" << candies_price << "\t\tGoods: " << candies_stock << '\n' << "3 for Notebooks: " << notebooks_price << "\t\tGoods: " << notebooks_stock << '\n' << "4 for Books:\t" << books_price << "\t\tGoods: " << books_stock << "\n5 for Exit\nEnter: ";
//		cin >> choice2;
//
//		choice = choice2;
//		while (choice < 0 || choice > 5)
//		{
//			cout << "Error!!Please Try Again: ";
//			cin >> choice2;
//			choice = choice2;
//		}
//
//		if (choice == 5)
//		{
//			cout << "Bye";
//			break;
//		}
//
//		while (choice)
//		{
//
//			if (choice == 1)
//			{
//				cout << "Enter Count of Dolls: ";
//				cin >> dolls_count;
//
//				while (dolls_count > dolls_stock)
//				{
//					cout << "Error!!Trye Again: ";
//					cin >> dolls_count;
//				}
//				dolls_stock -= dolls_count;
//				cout << "Do you have discount: ";
//				cin >> yes_or_no;
//
//				if (yes_or_no == true)
//				{
//					cout << "enter discount: ";
//					cin >> discount;
//
//					while (discount < 0 || discount > 100)
//					{
//						cout << "Error!!Please Try Again: ";
//						cin >> discount;
//					}
//
//					balance += (dolls_price - ((dolls_price / 100) * discount)) * dolls_count;
//				}
//				else
//				{
//					balance += dolls_price * dolls_count;
//				}
//				cout << "Final Price: " << balance << endl;
//
//			}
//			if (choice == 2)
//			{
//				cout << "Enter Count of Candies: ";
//				cin >> candies_count;
//
//				while (candies_count > candies_stock)
//				{
//					cout << "Error!!Trye Again: ";
//					cin >> candies_count;
//				}
//				candies_stock -= candies_count;
//				cout << "Do you have discount: ";
//				cin >> yes_or_no;
//
//				if (yes_or_no == true)
//				{
//					cout << "enter discount: ";
//					cin >> discount;
//
//					while (discount < 0 || discount > 100)
//					{
//						cout << "Error!!Please Try Again: ";
//						cin >> discount;
//					}
//
//					balance += (candies_price - ((candies_price / 100) * discount)) * candies_count;
//				}
//				else
//				{
//					balance += candies_price * candies_count;
//				}
//				cout << "Final Price: " << balance << endl;
//			}
//			if (choice == 3)
//			{
//				cout << "Enter Count of Notebooks: ";
//				cin >> notebooks_count;
//
//				while (notebooks_count > notebooks_stock)
//				{
//					cout << "Error!!Trye Again: ";
//					cin >> notebooks_count;
//				}
//				notebooks_stock -= notebooks_count;
//				cout << "Do you have discount: ";
//				cin >> yes_or_no;
//				if (yes_or_no == true)
//				{
//					cout << "enter discount: ";
//					cin >> discount;
//
//					while (discount < 0 || discount > 100)
//					{
//						cout << "Error!!Please Try Again: ";
//						cin >> discount;
//					}
//
//					balance += (notebooks_price - ((notebooks_price / 100) * discount)) * notebooks_count;
//				}
//				else
//				{
//					balance += notebooks_price * notebooks_count;
//				}
//				cout << "Final Price: " << balance << endl;
//			}
//			if (choice == 4)
//			{
//				cout << "Enter Count of books: ";
//				cin >> books_count;
//
//				while (books_count > books_stock)
//				{
//					cout << "Error!!Trye Again: ";
//					cin >> books_count;
//				}
//				books_stock -= books_count;
//				cout << "Do you have discount: ";
//				cin >> yes_or_no;
//				if (yes_or_no == true)
//				{
//					cout << "enter discount: ";
//					cin >> discount;
//
//					while (discount < 0 || discount > 100)
//					{
//						cout << "Error!!Please Try Again: ";
//						cin >> discount;
//					}
//
//					balance += (books_price - ((books_price / 100) * discount)) * books_count;
//				}
//				else
//				{
//					balance += books_price * books_count;
//				}
//				cout << "Final Price: " << balance << endl;
//
//			}
//			cout << "Anything Else: ";
//			cin >> choice2;
//			choice = choice2;
//
//			continue;
//		}
//		
//	}
//}
