#include "HardDisk.h"


HardDrive::HardDrive(string make, string model, string formFactor, uint16_t capacity) : Component(make, model)
{
    this->formFactor = formFactor;
    this->capacity = capacity;
}

void HardDrive::hardDriveInfo() const {
    cout << "Hard drive info" << endl;
    cout << "Hard drive maker: " << make << endl
        << "Hard drive model: " << model << endl
        << "Hard drive form-factor: " << formFactor << endl
        << "Hard drive capacity: " << capacity << endl;
}