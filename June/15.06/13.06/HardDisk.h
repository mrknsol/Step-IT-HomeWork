#pragma once
#include <iostream>
#include "Component.h"
using namespace std;

struct HardDrive : public Component
{
    string formFactor;
    uint16_t capacity;
    HardDrive() = default;
    HardDrive(string make, string model, string formFactor, uint16_t capacity);
    void hardDriveInfo() const;
};