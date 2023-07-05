#include <iostream>
using namespace std;

// 1
class student {
private:
    string name;
    int age;
    string university;

public:
    student(string name, int age, string university) {
        this->name = name;
        this->age = age;
        this->university = university;
    }

    void displayinfo() {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "university: " << university << endl;
    }
};

class aspirant : public student {
private:
    string researchtopic;

public:
    aspirant(string name, int age, string university, string researchtopic)
            : student(name, age, university) {
        this->researchtopic = researchtopic;
    }

    void displayinfo() {
        student::displayinfo();
        cout << "research topic: " << researchtopic << endl;
    }
};

int main() {
    student student("student", 20, "unec");
    student.displayinfo();

    cout << endl;

    aspirant aspirant("aspirant", 25, "anas", "analysis of machine learning algorithms");
    aspirant.displayinfo();

    return 0;
}
class passport {
protected:
    string firstname;
    string surname;
    string nationality;
    string passportnumber;

public:
    passport(string firstname, string surname, string nationality, string passportnumber) {
        this->firstname = firstname;
        this->surname = surname;
        this->nationality = nationality;
        this->passportnumber = passportnumber;
    }

    void displayinfo() {
        cout << "first name: " << firstname << endl;
        cout << "last name: " << surname << endl;
        cout << "nationality: " << nationality << endl;
        cout << "passport number: " << passportnumber << endl;
    }
};

class foreignpassport : public passport {
private:
    string visainformation;
    string foreignpassportnumber;

public:
    foreignpassport(string firstname, string surname, string nationality, string passportnumber,
                    string visainformation, string foreignpassportnumber)
            : passport(firstname, surname, nationality, passportnumber) {
        this->visainformation = visainformation;
        this->foreignpassportnumber = foreignpassportnumber;
    }

    void displayinfo() {
        passport::displayinfo();
        cout << "visa information. " << visainformation << endl;
        cout << "foreign passport number: " << foreignpassportnumber << endl;
    }
};

int main() {
    foreignpassport foreignpassport("a", "b", "azerbaijanian", "12345678",
                                    "valid visas: schengen", "98765432");

    foreignpassport.displayinfo();

    return 0;
}

class transport {
protected:
    string type;
    int passengercapacity;
    int cargocapacity;

public:
    transport(string type, int passengercapacity, int cargocapacity) {
        this->type = type;
        this->passengercapacity = passengercapacity;
        this->cargocapacity = cargocapacity;
    }



    void displayinfo() {
        cout << "type: " << type << endl;
        cout << "passenger capacity: " << passengercapacity << endl;
        cout << "cargo capacity: " << cargocapacity << endl;
    }
};

class car : public transport {
public:
    car(int passengercapacity, int cargocapacity)
            : transport("car", passengercapacity, cargocapacity) {}

    void calculatetime(int distance) {
        cout << "time taken by car: " << distance / 60 << " hours" << endl;
    }

    void calculatecost(int distance) {
        cout << "cost of car transportation: " << distance * 0.1 << "azn" << endl;
    }
};

class bicycle : public transport {
public:
    bicycle(int passengercapacity, int cargocapacity)
            : transport("bicycle", passengercapacity, cargocapacity) {}

    void calculatetime(int distance)  {
        cout << "time taken by bicycle: " << distance / 10 << " hours" << endl;
    }

    void calculatecost(int distance) {
        cout << "cost of bicycle transportation: " << distance * 0.05 << "azn" << endl;
    }
};

class truck : public transport {
public:
    truck(int passengercapacity, int cargocapacity)
            : transport("truck", passengercapacity, cargocapacity) {}

    void calculatetime(int distance) {
        cout << "time taken by truck: " << distance / 50 << " hours" << endl;
    }

    void calculatecost(int distance) {
        cout << "cost of truck transportation: " << distance * 0.15 << "azn" << endl;
    }
};

int main() {
    car car(4, 100);
    bicycle bicycle(1, 20);
    truck truck(3, 500);

    car.displayinfo();
    car.calculatetime(120);
    car.calculatecost(120);

    cout << endl;


    bicycle.displayinfo();
    bicycle.calculatetime(120);
    bicycle.calculatecost(120);

    cout << endl;


    truck.displayinfo();
    truck.calculatetime(120);
    truck.calculatecost(120);

    return 0;
}
