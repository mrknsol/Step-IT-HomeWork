#include "Component.h"

Component::Component(string& make, string& model) {
    this->make = make;
    this->model = model;
}

void Component::info() const {
    cout << "Make: " << this->make;
    cout << "Model: " << this->model;
}