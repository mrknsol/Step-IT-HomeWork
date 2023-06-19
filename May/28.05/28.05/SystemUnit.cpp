#include "SystemUnit.h"
#include <iostream>
using namespace std;


systemUnit::systemUnit(string& _make, string& _model, uint16_t& _serialNumber, motherBoard& _motherBoard,
	powerUnit& _powerUnit, storageDevice& _storageDevice, Cooler& _cooler) : components(_make, _model, _serialNumber)
{
	this->motherBoardd = new motherBoard(_motherBoard);
	this->powerUnitt = new powerUnit(_powerUnit);
	this->storageDevicee = new storageDevice(_storageDevice);
	this->cooler = new Cooler(_cooler);
}

void systemUnit::printDataSystemUnit() const
{
	cout
		<< "System unit make: " << this->make << endl
		<< "System unit model: " << this->model << endl;

	this->motherBoardd->printDataMotherBoard();
	this->powerUnitt->printDataPowerUnit();
	this->storageDevicee->printDataStorageDevice();
	this->cooler->printDataCooler();
}