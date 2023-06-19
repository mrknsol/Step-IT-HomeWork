#pragma once
#include <string>
#include <iostream>
#include "Components.h"
using namespace std;

class storageDevice : public components
{
private:
	uint16_t* readingSpeed = new uint16_t{};
	uint16_t* writeSpeed = new uint16_t{};
	uint16_t* powerConsumption = new uint16_t{};
	uint16_t* weight = new uint16_t{};
	uint16_t* capacity = new uint16_t{};
public:
	storageDevice(string& _make, string& _model, uint16_t& _serialNumber, uint16_t& _readingSpeed, uint16_t& _writeSpeed
		, uint16_t& _powerConsumption, uint16_t& _weight, uint16_t& _capacity);

	uint16_t getReadingSpeed() const;
	uint16_t getWriteSpeed() const;
	uint16_t getPowerConsuption() const;
	uint16_t getWeight() const;
	uint16_t getCapacity() const;

	void printDataStorageDevice() const;
};