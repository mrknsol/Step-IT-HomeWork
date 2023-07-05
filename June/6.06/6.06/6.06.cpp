#include <iostream>
using namespace std;



template<typename T>
class Node {
public:
    T data;
    Node* prev;
    Node* next;
    Node(T data, Node* prev = nullptr, Node* next = nullptr) {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};

template<typename T>
class DoubleLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;

public:
    DoubleLinkedList(Node<T>* head = nullptr, Node<T>* tail = nullptr) {
        this->head = head;
        this->tail = tail;

    }

    void append(T data) {
        Node<T>* newNode = new Node<T>(data);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void insert(int index, T data) {
        if (index < 0) {
            cout << "Invalid index!" << endl;
            return;
        }

        if (index == 0) {
            prepend(data);
            return;
        }

        Node<T>* newNode = new Node<T>(data);
        Node<T>* current = head;
        int currentIndex = 0;

        while (current != nullptr && currentIndex < index - 1) {
            current = current->next;
            currentIndex++;
        }

        newNode->prev = current;
        newNode->next = current->next;

        if (current->next != nullptr) current->next->prev = newNode;

        current->next = newNode;

        if (current == tail) tail = newNode;
    }

    void pop() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }

        if (head == tail) {
            delete head;
            head = nullptr;
            tail = nullptr;
        }
        else {
            Node<T>* nodeToRemove = tail;
            tail = tail->prev;
            tail->next = nullptr;
        }
    }

    void removeAt(int index) {
        if (index < 0) {
            cout << "Invalid index!" << endl;
            return;
        }
        if (index == 0) {
            if (head == nullptr) {
                cout << "List is empty!" << endl;
                return;
            }

            Node<T>* nodeToRemove = head;
            head = head->next;

            if (head != nullptr) head->prev = nullptr;
            else tail = nullptr;
            return;
        }
        Node<T>* current = head;
        int currentIndex = 0;
        while (current != nullptr && currentIndex < index) {
            current = current->next;
            currentIndex++;
        }
        if (current == nullptr) {
            cout << "Index out of bounds!" << endl;
            return;
        }

        current->prev->next = current->next;

        if (current->next != nullptr) current->next->prev = current->prev;

        if (current == tail) tail = current->prev;

    }
    void remove(T data) {
        Node<T>* current = head;
        while (current != nullptr) {
            if (current->data == data) {
                if (current == head) head = current->next;
                else current->prev->next = current->next;



                if (current == tail) tail = current->prev;
                else current->next->prev = current->prev;



                return;
            }

            current = current->next;
        }

        cout << "Element not found in the list!" << endl;
    }

    void print() {
        Node<T>* current = head;

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }

        cout << endl;
    }
};

int main() {
    DoubleLinkedList<int> list;

    list.append(1);
    list.append(2);
    list.append(3);
    list.insert(2, 5);
    list.print();

    list.pop();
    list.removeAt(1);
    list.remove(2);
    list.print();

    return 0;
}