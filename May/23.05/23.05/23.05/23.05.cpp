#include "23.05.h"

void addStudent(string data[], uint16_t date[])
{
	cout << "Enter name of Institution: "; cin >> data[0];
	cout << "Enter Institute country: "; cin >> data[1];
	cout << "Enter Institute city: "; cin >> data[2];
	cout << "Enter name student: "; cin >> data[3];
	cout << "Enter surname student: "; cin >> data[4];
	cout << "Enter day: ";
	while (date[0] <= 0 || date[0] > 31)
		cin >> date[0];
	cout << "Enter month: ";
	while (date[1] <= 0 || date[1] > 12)
		cin >> date[1];
	cout << "Enter year: ";
	while (date[2] < 1950 || date[2] > 2007)
		cin >> date[2];
	cout << "Enter contact number: "; cin >> data[5];
	cout << "Enter city: "; cin >> data[6];
	cout << "Enter country: "; cin >> data[7];
	cout << "Enter name group: "; cin >> data[8];
}

int main()
{
	Database* Academy = new Database{};

	int choice{};
	bool exit = true;
	string data[9]{};
	uint16_t date[3]{};

	while (exit)
	{
		cout
			<< "Enter choice: " << endl
			<< "1. Add student" << endl
			<< "2. Print data student" << endl
			<< "3. Exit the program" << endl;
		cin >> choice;

		if (choice == 1)
		{
			system("cls");
			addStudent(data, date);

			student* s = new student(data[0], data[1], data[2], data[3], data[4],
				data[5], data[6], data[7], data[8], date[0], date[1], date[2]);

			date[0] = 0, date[1] = 0, date[2] = 0;

			Academy[Academy->count].person = s;

			Academy->count++;
		}
		else if (choice == 2)
		{
			system("cls");
			cout << "Choose a student: " << endl;
			for (uint16_t i = 0; i < Academy->count; i++)
				cout << i + 1 << ". " << Academy[i].person->name << endl;
			cin >> choice;

			cout
				<< "University name: " << Academy[choice - 1].person->getNameUNI() << endl
				<< "University country: " << Academy[choice - 1].person->getCountryUNI() << endl
				<< "University city: " << Academy[choice - 1].person->getCityUNI() << endl;

			Academy[choice - 1].person->printDataStudent();
		}
		else
			exit = false;
	}

	return 0;
}