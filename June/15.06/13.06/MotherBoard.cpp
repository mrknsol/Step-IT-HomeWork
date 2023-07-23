#include "Motherboard.h"

Motherboard::Motherboard(string make, string model, string formFactor,
    string chipsetMaker, int cpuCompatibility,
    string ramType, int ramSize) : Component(make, model)
{
    this->formFactor = formFactor;
    this->chipsetMaker = chipsetMaker;
    this->ramType = ramType;
    this->ramSize = ramSize;
    this->cpuCompatibility = cpuCompatibility;
}

Motherboard::Components::Components(string socketType, string BIOS) {
    this->socketType = socketType;
    this->BIOS = BIOS;
}




void Motherboard::Components::infoComponents() const {
    cout << "Socket type: " << this->socketType << endl
        << "BIOS: " << this->BIOS;
}

void Motherboard::motherboadInfo() const {
    cout << "Motherboard info" << endl;

    Component::info();

    cout
        << "Form Factor: " << formFactor << endl
        << "Chipset manufacturer: " << chipsetMaker << endl
        << "CPU compatibility: " << cpuCompatibility << endl
        << "RAM type: " << ramType << endl
        << "RAM size: " << ramSize << endl;


}

