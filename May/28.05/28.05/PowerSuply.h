#pragma once
#include <string>
#include <iostream>
#include "Components.h"
using namespace std;

class powerUnit : public components
{
private:
	uint16_t* power = new uint16_t{};
	uint16_t* tension = new uint16_t{};
	uint16_t* current = new uint16_t{};
	uint16_t* efficiency = new uint16_t{};
public:
	powerUnit(string& _make, string& _model, uint16_t& _serialNumber, uint16_t& _power,
		uint16_t& _tension, uint16_t& _current, uint16_t& _efficiency);

	uint16_t getPower() const;
	uint16_t getTension() const;
	uint16_t getCurrent() const;
	uint16_t getEfficiency() const;

	void printDataPowerUnit() const;
};