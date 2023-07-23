#include "RAM.h"


RAM::RAM(string make, string model, string type, int size, int clockSpeed) : Component(make, model)
{
    this->type = type;
    this->size = size;
    this->clockSpeed = clockSpeed;
}


void RAM::ramInfo() const {
    Component::info();
    cout << endl << "RAM info" << endl
        << "RAM type: " << this->type << endl
        << "RAM size in GB: " << this->size << endl
        << "RAM clock speed: " << this->clockSpeed << endl;
}

