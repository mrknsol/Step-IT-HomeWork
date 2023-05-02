#include <iostream>
using namespace std;

struct Animal {
    char* animalName = new char[30] {};
    char* animalGender = new char[30];
    int age{};


    void printAnimalInfo() {
        cout << "Animal Name: " << animalName << endl
            << "Gender: " << animalGender << endl
            << "Age: " << age << endl;
    }
};

struct Zoo {
    uint16_t zooCapacity{ 10 };
    uint16_t countAnimals{};
    char* zooName = new char[30];
    Animal* animals{};


    void createAnimal()
    {
        if (countAnimals < zooCapacity)
        {
            Animal* a = new Animal{};

            getchar();

            cout << "Enter animal name:";
            cin.getline(a->animalName, 30);

            cout << "Enter animal gender: ";
            cin.getline(a->animalGender, 30);

            cout << "Enter animal age: ";
            cin >> a->age;

            animals[countAnimals] = *a;
            countAnimals++;
        }
        else {
            cout << "Zoo is full!" << endl;
        }
    }

    void editAnimal()
    {
        showAll();

        int choice{};
        cout << "Enter animal: " << endl;
        cin >> choice;

        getchar();

        cout << "Enter new animal name: ";
        cin.getline(animals[choice - 1].animalName, 30);

        cout << "Enter new animal gender: ";
        cin.getline(animals[choice - 1].animalGender, 30);

        cout << "Enter new animal age: ";
        cin >> animals[choice - 1].age;

    }

    void deleteAnimal()
    {
        showAll();

        int choice{};
        cout << "Choose animal to delete:" << endl;
        cin >> choice;

        getchar();

        int index = choice - 1;
        for (int i = choice - 1; i < zooCapacity; ++i)
        {
            if (animals[i].animalName == nullptr)
                break;

            index++;
            animals[i].animalName = animals[i + 1].animalName;
            animals[i].animalGender = animals[i + 1].animalGender;
            animals[i].age = animals[i + 1].age;

        }
        animals[index].animalName = nullptr;
        animals[index].animalGender = nullptr;
        animals[index].age = 0;
        countAnimals--;

    }




    void printInfo()
    {
        cout << "There are" << countAnimals << " animals in " << zooName << " ZOO" << endl;
    }

    void showAll()
    {
        for (int i = 0; i < countAnimals; i++) {
            cout << "Animal #" << i + 1 << endl;
            animals[i].printAnimalInfo();
        }
    }
};

void createZoo(Zoo*& zoo) {

    zoo = new Zoo{};

    cout << "Enter ZOO name: ";
    cin.getline(zoo->zooName, 30);

    cout << "Enter ZOO capacity: ";
    cin >> zoo->zooCapacity;
    getchar();

    zoo->animals = new Animal[zoo->zooCapacity]{};

}

int main() {

    int choice{};

    Zoo* zoo{};
    createZoo(zoo);


    while (true)
    {
        cout << "Enter choice: " << endl
            << "1. Add animal" << endl
            << "2. Delete animal" << endl
            << "3. Edit animal" << endl
            << "4. Show animals" << endl;

        cin >> choice;


        switch (choice) {
        case 1:
            system("cls");
            zoo->createAnimal();
            break;
        case 2:
            system("cls");
            zoo->deleteAnimal();
            break;
        case 3:
            system("cls");
            zoo->editAnimal();
            break;
        case 4:
            system("cls");
            zoo->showAll();
            break;
        default:
            break;
        }
    }
    return 0;
}