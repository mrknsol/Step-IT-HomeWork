#pragma once
#include <iostream>
#include "Component.h"

using namespace std;

struct CPU : public Component
{
    double clockSpeed{};

    CPU() = default;
    CPU(string make, string model, double clockSpeed);

    void cpuInfo() const;

};
