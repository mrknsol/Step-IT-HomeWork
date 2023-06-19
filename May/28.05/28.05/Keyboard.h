#pragma once
#include <iostream>
#include <string>
#include "Components.h"
using namespace std;

class keyboard : public components
{
private:

	string type{};
	string connectionType{};
	string spillResistance{};
	string compatibleWithOC{};
	uint16_t* pollingFrequency = new uint16_t{};
public:
	keyboard(string& _make, string& _model, uint16_t& _serialNumber, string& _type, string& _connectionType, string& _spillResistance, string& _compatibleWithOC,
		uint16_t& _pollingFrequency);

	string getType() const;
	string getConnectionType() const;
	string getSpillResistance() const;
	string getCompatibleWithOC() const;
	uint16_t getPollingFrequency() const;

	void printDataKeyboard() const;
};