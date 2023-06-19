#pragma once
#include <iostream>
#include <string>
#include "MotherBoard.h"
#include "StorageDevice.h"
#include "PowerUnit.h"
#include "Cooler.h"
using namespace std;

class systemUnit : public components
{
public:
	motherBoard* motherBoardd{};
	powerUnit* powerUnitt{};
	storageDevice* storageDevicee{};
	Cooler* cooler{};

	systemUnit(string& _make, string& _model, uint16_t& _serialNumber, motherBoard& _motherBoard,
		powerUnit& _powerUnit, storageDevice& _storageDevice, Cooler& _cooler);

	void printDataSystemUnit() const;
};