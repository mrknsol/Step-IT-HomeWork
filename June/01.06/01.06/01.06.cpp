#include <iostream>
using namespace std;

class Circle {
public:
	int R{};
	int C{};

	Circle(int R, int C) {
		this->R = R;
		this->C = C;
	}


	Circle() = default;


	Circle(Circle R, Circle C) {
		cout << "Enter Circle's radius: " << endl;
		cin >> this->R;
		cout << "Enter Circle's C: " << endl;
		cin >> this->C;
	}

	bool operator == (const Circle& other) const {
		return this->R == other.R;
	}
	bool operator > (const Circle& other) const {
		return this->C > other.C;
	}
	bool operator < (const Circle& other) const {
		return this->C < other.C;
	}
	void operator + (int a) {
		this->R += a;
		this->C = 2 * 3.14 * this->R;
	}
	bool operator - (int a) {
		this->R -= a;
		this->C = 2 * 3.14 * this->R;
	}
};





int main() {

	Circle* c1{};
	Circle* c2{};

	int choice{};

	Circle(c1->R, c1->C);
	Circle(c2->R, c2->C);


	cout
		<< "1.For comparison" << endl
		<< "2.For increase" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "the first circle is smaller than the second circle: " << (c1 < c2);
		cout << "the first circle is bigger than the second circle: " << (c1 > c2);
		cout << "the first circle is the same as the second circle: " << (c1 == c2);
	case 2:
		int choice2{};
		int a{};
		cout << "enter" << endl
			<< "1.For increase" << endl
			<< "2.For decrease" << endl
			<< "enter: " << endl;
		cin >> choice2;



		switch (choice2)
		{
		case 1:
			cout << "Enter number for increase: " << endl;
			cin >> a;
			c1 += a;
			cout << c1->R;
			cout << c1->C;
			break;
		case 2:
			cout << "Enter number for decrease: " << endl;
			cin >> a;
			cout << "Radius: " << c1->R;
			cout << "C: " << c1->C;
			break;
		}
	}
}