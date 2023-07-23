#pragma once
#include <iostream>
#include "Component.h"

using namespace std;

struct RAM : public Component
{
    string type;
    int size;
    int clockSpeed;

    RAM() = default;
    RAM(string make, string model, string type, int size, int clockSpeed);

    string getRamType() const;
    int getRamSize() const;


    void ramInfo() const;
};
