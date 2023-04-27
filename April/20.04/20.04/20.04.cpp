#include <iostream>
using namespace std;

uint16_t count2{};

struct Student
{
	char* name = new char[31];
	char* surname = new char[31];
	char* patronymic = new char[31];
	int grades[10]{};

	void printInfo()
	{
		cout
			<< "Student's name: " << name << endl
			<< "Student's surname: " << surname << endl
			<< "Student's patronymic: " << patronymic << endl;

		for (size_t i = 0; i < 10; i++)
		{
			cout << "Grade " << i + 1 << " is: " << grades[i] << endl;
		}
	}

	void average()
	{
		int avg{};
		for (size_t i = 0; i < 10; i++)
		{
			avg += grades[i];
		}
		cout << "Average of student: " << avg / 10;
	}
};

struct Students
{
	char* name = new char[11];
	uint16_t capacity{ 20 };
	Student* students{};

	void creationOfStudent()
	{
		if (count2 < capacity)
		{
			Student* s = new Student{};

			cout << "Enter student's name: "; cin.getline(s->name, 30);
			cout << "Enter student's surname: "; cin.getline(s->surname, 30);
			cout << "Enter student's surname: "; cin.getline(s->patronymic, 30);

			students[count2] = *s;
			count2++;
		}
		else
			cout << "Error!!";
	}

	void addGrades()
	{
		for (size_t i = 0; i < 10; i++)
		{
			cout << "Enter " << i + 1 << " grade:"; 
			cin >> students->grades[i];
		}
	}
};

void create(Students*& c)
{
	c = new Students{};

	cout << "Enter name: "; cin.getline(c->name, 10);

	c->students = new Student[c->capacity];
}

void printStudents(Students* students)
{
	for (size_t i = 0; i < count2; i++)
	{
		cout << "Student #" << i + 1 << students->name << endl;
	}
}

int main()
{
	Students* students{};
	create(students);

	while (true)
	{
		int choice{};
		cout
			<< "1. For add student" << endl
			<< "2. For rate" << endl
			<< "3. For displaying a list of students" << endl
			<< "4. For printing student grades" << endl
			<< "Enter: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			getchar();
			students->creationOfStudent();
			break;
		case 2:
			printStudents(students);
			cout << "Enter student for printing: ";
			cin >> choice;
			students[choice].addGrades();
			break;
		case 3:
			printStudents(students);
		case 4:
			printStudents(students);
			cout << "Enter student for printing: ";
			cin >> choice;
			students[choice];
			break;
		}
	}
}