#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    uint16_t age{};
public:
    string name{};
    string surname{};
    Student() = default;

    Student(string name, string surname, uint16_t age) {
        this->name = name;
        this->surname = surname;
        this->age = age;
    }


    uint16_t getAge() {
        return this->age;
    }

    uint16_t setAge(uint16_t age) {
        this->age = age;
        return this->age;
    }


};

void createStudent(Student* _student) {
    uint16_t _age{}; string data[2]{};
    cout << "enter name: ";
    cin >> data[0];

    cout << "Enter surname: ";
    cin >> data[1];

    cout << "Enter Age: ";
    cin >> _age;
    _student = new Student(data[0], data[1], _age);
}



class Classroom : public Student {
public:
    string nameOfClass{};
    uint16_t capacity{};
    uint16_t count{};

    Classroom() = default;

    Classroom(string name, string surname, uint16_t age, uint16_t capacity, uint16_t count, string nameOfClass) : Student(name, surname, age) {
        this->capacity = capacity;
        this->count = count;
        this->nameOfClass = nameOfClass;
    }

    void printInfo() {
        cout << "Name: " << this->name;
    }

};

void createClass(Classroom* _classroom) {
    cout << "Enter Name Of Class: ";
    cin >> _classroom->nameOfClass;

    cout << "Enter Capacity Of Class: ";
    cin >> _classroom->capacity;
}

int main() {

    Student* student = new Student{};
    Classroom* classroom = new Classroom{};
    int choice{};

    createClass(classroom);

    while (true)
    {
        cout << "1.For Add student" << endl;
        cout << "2.For Print" << endl;
        cout << "Enter: " << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            if (classroom->count > classroom->capacity)
                cout << "error";
            else
                createStudent(student);

        case 2:
            classroom->printInfo();
        default:
            break;
        }

    }

}