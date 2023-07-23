#include <iostream>
#include "Computer.h"
#include "RAM.h"
#include "Motherboard.h"
#include "PowerSuply.h"
#include "CPU.h"
#include "CoolingSystem.h"
#include "HardDisk.h"
#include "GPU.h"

using namespace std;



void RAM_FUNCTION(string& make, string& model, string& type, int& size, int& clockSpeed, RAM*& ram)
{
    cout << "Enter RAM make: "; cin >> make;
    cout << "Enter RAM model: "; cin >> model;
    cout << "Enter RAM type: "; cin >> type;
    cout << "Enter RAM size in GB: "; cin >> size;
    cout << "Enter RAM clock speed in MHz: "; cin >> clockSpeed;

    ram->make = make;
    ram->model = model;
    ram->type = type;
    ram->size = size;
    ram->clockSpeed = clockSpeed;
}
void MOTHERBOARD_FUNCTION(string& make, string& model, string& formFactor,
    string& chipsetMaker, int& cpuCompatibility, string& ramType, int& ramSize, Motherboard*& motherboard)
{
    cout << "Enter motherboard maker: "; cin >> make;
    cout << "Enter motherboard model: "; cin >> model;
    cout << "Enter motherboard form-factor: "; cin >> formFactor;
    cout << "Enter motherboard chipset maker: "; cin >> chipsetMaker;
    cout << "Enter motherboard cpu compatibility: "; cin >> cpuCompatibility;
    cout << "Enter motherboard ram type: "; cin >> ramType;
    cout << "Enter motherboard ram size: "; cin >> ramSize;

    motherboard->make = make;
    motherboard->model = model;
    motherboard->formFactor = formFactor;
    motherboard->chipsetMaker = chipsetMaker;
    motherboard->cpuCompatibility = cpuCompatibility;
    motherboard->ramType = ramType;
    motherboard->ramSize = ramSize;



}
void POWERSUPPLY_FUNCTION(string& make, string& model, uint16_t& power, uint16_t& fanDiameter, Powersupply*& powersupply)
{
    cout << "Enter power supply maker: "; cin >> make;
    cout << "Enter power supply model: "; cin >> model;
    cout << "Enter power supply power: "; cin >> power;
    cout << "Enter power supply fan diameter: "; cin >> fanDiameter;

    powersupply->make = make;
    powersupply->model = model;
    powersupply->power = power;
    powersupply->fanDiameter = fanDiameter;
}
void CPU_FUNCTION(string& make, string& model, double& clockSpeed, CPU*& cpu)
{

    cout << "Enter CPU make: "; cin >> make;
    cout << "Enter CPU model: "; cin >> model;
    cout << "Enter CPU clock speed: "; cin >> clockSpeed;

    cpu->make = make;
    cpu->model = model;
    cpu->clockSpeed = clockSpeed;

}
void COOLINGSYSTEM_FUNCTION(string& make, string& model, string type, uint16_t coolerCount, CoolingSystem*& coolingSystem)
{
    cout << "Enter cooling system maker: "; cin >> make;
    cout << "Enter cooling system model: "; cin >> model;
    cout << "Enter cooler type: "; cin >> type;
    cout << "Enter count of ventilators: "; cin >> coolerCount;

    coolingSystem->make = make;
    coolingSystem->model = model;
    coolingSystem->type = type;
    coolingSystem->coolerCount;
}
void HARDDRIVE_FUNCTION(string& make, string& model, string& formFactor, uint16_t& capacity, HardDrive*& hardDrive)
{
    cout << "Enter hard drive maker: "; cin >> make;
    cout << "Enter hard drive model: "; cin >> model;
    cout << "Enter hard drive form-factor: "; cin >> formFactor;
    cout << "Enter hard drive capacity: "; cin >> capacity;


    hardDrive->make = make;
    hardDrive->model = model;
    hardDrive->formFactor = formFactor;
    hardDrive->capacity = capacity;
}
void VIDEOCARD_FUNCTION(string& make, string& model, string& graphicFamily, uint16_t& internalVideoMemory, string& memoryType, uint16_t& memoryBits, uint16_t& ventilatorsCount, VideoCard*& videoCard)
{
    cout << "Enter video card maker: "; cin >> make;
    cout << "Enter video card model "; cin >> model;
    cout << "Enter video card graphic family: "; cin >> graphicFamily;
    cout << "Enter internal video memory: "; cin >> internalVideoMemory;
    cout << "Enter memory type: "; cin >> memoryType;
    cout << "Enter video card memory bits: "; cin >> memoryBits;
    cout << "Enter number of ventilators: "; cin >> ventilatorsCount;

    videoCard->make = make;
    videoCard->model = model;
    videoCard->graphicFamily = graphicFamily;
    videoCard->internalVideoMemory = internalVideoMemory;
    videoCard->memoryType = memoryType;
    videoCard->memoryBits = memoryBits;
    videoCard->ventilatorsCount = ventilatorsCount;

}




int main()
{
    string ramMake, ramModel, ramType;
    int ramSize = 0, ramClockSpeed = 0;
    RAM* ram = new RAM(ramMake, ramModel, ramType, ramSize, ramClockSpeed);
    RAM_FUNCTION(ramMake, ramModel, ramType, ramSize, ramClockSpeed, ram);

    string socketType, BIOS;
    Motherboard::Components components;
    Motherboard::Components(socketType, BIOS);
    components.socketType = "Socket type";
    components.BIOS = "BIOS";


    int motherboardRamSize = 0, motherboardCpuCompatibility = 0;
    string motherboardMake, motherboardModel, motherboardFormFactor, motherboardChipsetMaker, motherboardRamType;
    Motherboard* motherboard = new Motherboard(motherboardMake, motherboardModel, motherboardFormFactor, motherboardChipsetMaker, motherboardCpuCompatibility, motherboardRamType, motherboardRamSize);
    MOTHERBOARD_FUNCTION(motherboardMake, motherboardModel, motherboardFormFactor, motherboardChipsetMaker, motherboardCpuCompatibility, motherboardRamType, motherboardRamSize, motherboard);


    string powerSupplyMake, powerSupplyModel;
    uint16_t powerSupplyPower = 0, powerSupplyFanDiameter = 0;
    Powersupply* powersupply = new Powersupply(powerSupplyMake, powerSupplyModel, powerSupplyPower, powerSupplyFanDiameter);
    POWERSUPPLY_FUNCTION(powerSupplyMake, powerSupplyModel, powerSupplyPower, powerSupplyFanDiameter, powersupply);


    string cpuMake, cpuModel; double cpuClockSpeed = 0;
    CPU* cpu = new CPU(cpuMake, cpuModel, cpuClockSpeed);
    CPU_FUNCTION(cpuMake, cpuModel, cpuClockSpeed, cpu);


    string coolingSystemMake, coolingSystemModel, coolerType;
    uint16_t coolerCount;
    CoolingSystem* coolingSystem = new CoolingSystem(coolingSystemMake, coolingSystemModel, coolerType, coolerCount);
    COOLINGSYSTEM_FUNCTION(coolingSystemMake, coolingSystemModel, coolerType, coolerCount, coolingSystem);


    string makeHardDrive, modelHardDrive, formFactorHardDrive; uint16_t capacityHardDrive = 0;
    HardDrive* hardDrive = new HardDrive(makeHardDrive, modelHardDrive, formFactorHardDrive, capacityHardDrive);
    HARDDRIVE_FUNCTION(makeHardDrive, modelHardDrive, formFactorHardDrive, capacityHardDrive, hardDrive);


    string makeVideoCard, modelVideoCard, graphicFamilyVideoCard, memoryTypeVideoCard;
    uint16_t memoryBitsVideoCard = 0, ventilatorsCount = 0, internalVideoMemoryVideoCard = 0;
    VideoCard* videoCard = new VideoCard(makeVideoCard, modelVideoCard, graphicFamilyVideoCard, internalVideoMemoryVideoCard, memoryTypeVideoCard, memoryBitsVideoCard, ventilatorsCount);
    VIDEOCARD_FUNCTION(makeVideoCard, modelVideoCard, graphicFamilyVideoCard, internalVideoMemoryVideoCard, memoryTypeVideoCard, memoryBitsVideoCard, ventilatorsCount, videoCard);



    Computer* computer = new Computer(*ram, *motherboard, *cpu, *hardDrive, *videoCard, *powersupply, *coolingSystem);



    int choice = 0;
    do {
        cout << "1.Show all info about computer" << endl
            << "2.Show RAM info" << endl
            << "3.Show CPU info" << endl
            << "4.Show motherboard info" << endl
            << "5.Show video card info" << endl
            << "6.Show hard drive info" << endl
            << "7.Show power supply info" << endl
            << "8.Show cooling system info" << endl
            << "9.Close program" << endl;
        cout << "Choose one: "; cin >> choice;

        switch (choice) {
        case 1:
            computer->computerInfo();
            break;
        case 2:
            ram->ramInfo();
            break;
        case 3:
            cpu->cpuInfo();
            break;
        case 4:
            motherboard->motherboadInfo();
            components.infoComponents();
            break;
        case 5:
            videoCard->videoCardInfo();
            break;
        case 6:
            hardDrive->hardDriveInfo();
            break;
        case 7:
            powersupply->powerSupplyInfo();
            break;
        case 8:
            coolingSystem->coolingSystemInfo();
            break;
        }
    } while (choice != 9);

    delete ram;
    delete cpu;
    delete videoCard;
    delete hardDrive;
    delete coolingSystem;
    delete motherboard;
    delete powersupply;
    delete computer;


    return 0;
}


