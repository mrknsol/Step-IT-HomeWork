#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class MyVector {
private:
    T* arr{};
    size_t length{};
    size_t capacity{};
public:
    MyVector(size_t capacity) {
        this->capacity = capacity;
    }

    MyVector(initializer_list<T> list) {
        this->capacity = list.size() * 2;
        this->length = list.size();
        this->arr = new T[this->capacity]{};

        for (auto i = list.begin(); i < list.end(); ++i) {
            this->arr[i - list.begin()] = *i;
        }
    }

    void push_back(T element) {
        if (this->length == this->capacity) {
            this->capacity *= 2;
            T* new_arr = new T[this->capacity]{};
            for (size_t i = 0; i < this->length; ++i) {
                new_arr[i] = this->arr[i];
            }
            delete[] this->arr;
            this->arr = new_arr;
        }
        this->arr[this->length] = element;
        this->length++;
    }
    void insertArr(T element) {
        int index{};
        T* new_arr = new T[this->capacity]{};
        if (this->length == this->capacity) {
            this->capacity *= 2;
            for (size_t i = 0; i < this->length; i++)
            {
                new_arr[i] = this->arr[i];
            }
            delete[] this->arr;
            this->arr = new_arr;
        }
        cout << "enter index: ";
        cin >> index;

        for (size_t i = 0; i < index; i++)
        {
            new_arr[i] = this->arr[i];

        }

        new_arr[index] = element;

        for (size_t i = index + 1; i < this->length + 1; i++)
        {
            new_arr[i] = this->arr[i];
        }
        for (size_t i = 0; i < this->length; i++)
        {
            cout << new_arr[i];
        }
    }

    void pop_back() {
        T* new_arr = new T[this->capacity]{};
        for (size_t i = 0; i < this->length - 1; i++)
        {
            new_arr[i] = this->arr[i];
        }
        length--;
        delete[] this->arr;
        this->arr = new_arr;

        for (size_t i = 0; i < this->length; i++)
        {
            cout << this->arr[i];
        }

    }

    void clearArr() {
        for (size_t i = 0; i < this->length; i++)
        {
            this->arr[i] = 0;
        }
        for (size_t i = 0; i < length; i++)
        {
            cout << this->arr[i];
        }
    }


    void begin() {
        cout << *(this->arr);
    }

    void end() {
        cout << this->arr[length - 1];
    }

    int capacityOfArr() {
        return this->capacity;
    }

    int sizeOfArr() {
        return this->length;
    }

    size_t getLength() const {
        return this->length;
    }

    friend ostream& operator<<(ostream& os, MyVector<T>& v) {
        for (size_t i = 0; i < v.length; ++i) {
            os << v.arr[i] << ' ';
        }
        return os;
    }

    T& operator[](size_t index) {
        if (index < this->length) {
            return this->arr[index];
        }
    }
};


int main() {
    MyVector<int> v1{ 1, 2, 3, 4, 5 };
    vector<int> v2 = { 1,2,3,4,5 };
    v1.begin();
    cout << '\n';
    cout << v1.capacityOfArr() << endl;
    v1.push_back(5);
    v1.pop_back();
    cout << '\n';
    v1.end();
    cout << '\n';
    cout << v1.sizeOfArr() << endl;
    /*v1.clearArr();*/
    //cout << '\n';

    v1.insertArr(6);
}