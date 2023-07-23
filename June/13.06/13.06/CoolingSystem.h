#pragma once
#include <iostream>
#include "Component.h"

using namespace std;

struct CoolingSystem : public Component
{
    string type;
    uint16_t coolerCount{};
    CoolingSystem() = default;
    CoolingSystem(string make, string model, string type, uint16_t coolerCount);

    void coolingSystemInfo() const;
};


