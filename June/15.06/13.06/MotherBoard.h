#pragma once
#include <iostream>
#include "Component.h"

using namespace std;

struct Motherboard : public Component
{
    struct Components
    {
        string socketType;
        string BIOS;

        Components() = default;
        Components(string socketType, string BIOS);

        void infoComponents() const;

    };

    int ramSize;
    int cpuCompatibility;
    string formFactor;
    string chipsetMaker;
    string ramType;



    Motherboard() = default;
    Motherboard(string make, string model,
        string formFactor, string chipsetMaker, int cpuCompatibility, string ramType, int ramSize);


    void motherboadInfo() const;
};
