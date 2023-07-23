#pragma once
#include <iostream>
#include "Component.h"
using namespace std;

struct Powersupply : public Component
{
    uint16_t power;
    uint16_t fanDiameter;

    Powersupply() = default;
    Powersupply(string make, string model, uint16_t power, uint16_t fanDiameter);

    void powerSupplyInfo() const;
};


