#include <iostream> 
using namespace std;

#pragma region Task1 
struct student
{
    char* surname = new char[21] {};
    char* group = new char[21] {};
    int performance[5]{};

    void printInfo()
    {
        cout
            << "Surname: " << surname << endl
            << "Group: " << group << endl;

        for (size_t i = 0; i < 5; i++)
        {
            cout << "Grade " << i + 1 << ":" << performance[i] << endl;
        }
    }
};

struct Students
{
    char* faculty = new char[21] {};
    uint16_t capacity{};
    uint16_t count{};
    student* students{};

    void createStudent()
    {
        student* s = new student{};

        getchar();

        cout << "Enter surname: "; cin.getline(s->surname, 20);
        cout << "Enter group: "; cin.getline(s->group, 20);

        for (size_t i = 0; i < 5; i++)
        {
            cout << "Enter grade " << i + 1 << ":"; cin >> s->performance[i];
        }

        students[count] = *s;
        count++;
    }

    void editCapacity()
    {
        cout << "Enter new capacity: "; cin >> capacity;

        student* r = new student[capacity]{};

        for (size_t i = 0; i < count; i++)
        {
            student* r1 = new student{};

            r1->surname = students[i].surname;
            r1->group = students[i].group;
            for (size_t j = 0; j < 5; j++)
            {
                r1->performance[j] = students[i].performance[j];
            }

            r[i] = *r1;
            delete r1;
        }
        delete students;
        students = new student[capacity]{};

        for (size_t i = 0; i < count; i++)
        {
            student* r2 = new student{};

            r2->surname = r[i].surname;
            r2->group = r[i].group;
            for (size_t j = 0; j < 5; j++)
            {
                r2->performance[j] = r[i].performance[j];
            }

            students[i] = *r2;
            delete r2;
        }
        delete r;
    }

    void print()
    {
        for (size_t i = 0; i < count; i++)
        {
            students[i].printInfo();
        }
    }
};

void createStudents(Students*& name)
{
    name = new Students{};
    cout << "Enter faculty: "; cin.getline(name->faculty, 20);
    cout << "Enter capacity: "; cin >> name->capacity;

    name->students = new student[name->capacity]{};
}

int main()
{
    Students* fbms{};
    createStudents(fbms);

    while (true)
    {
        int choice{};

        cout
            << "1. Add" << endl
            << "2. Print Info" << endl
            << "3. Edit capacity" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            system("cls");
            fbms->createStudent();
            break;
        case 2:
            system("cls");
            fbms->print();
            break;
        case 3:
            system("cls");
            fbms->editCapacity();
            break;
        default:
            break;
        }
    }

    return 0;
}
#pragma endregion