#include "Computer.h"

Computer :: Computer(RAM ram, Motherboard motherboard, CPU cpu, HardDrive hardDrive, VideoCard videoCard, Powersupply powersupply, CoolingSystem coolingSystem)

{
    this->videoCard = videoCard;
    this->hardDrive = hardDrive;
    this->coolingSystem = coolingSystem;
    this->powersupply = powersupply;
    this->motherboard = motherboard;
    this->ram = ram;
    this->cpu = cpu;
}

void Computer::computerInfo() const {
    ram.ramInfo();
    cpu.cpuInfo();
    videoCard.videoCardInfo();
    hardDrive.hardDriveInfo();
    coolingSystem.coolingSystemInfo();
    motherboard.motherboadInfo();
    motherboard.info();
    powersupply.powerSupplyInfo();

}


