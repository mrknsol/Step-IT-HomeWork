#pragma once
#include <iostream>
#include <string>
#include "Components.h"
using namespace std;

class mouse : public components
{
private:
	string sensorType{};
	string connectionType{};
	uint16_t* frequency = new uint16_t{};
	uint16_t* numberOfButtons = new uint16_t{};
	uint16_t* responseTime = new uint16_t{};
	uint16_t* DPI = new uint16_t{};
	uint16_t* weight = new uint16_t{};
public:
	mouse(string& _make, string& _model, uint16_t& _serialNumber, string& _sensortype, string& _connectionType, uint16_t& _frequency, uint16_t& _numberOfButtons,
		uint16_t& _responseTime, uint16_t& _DPI, uint16_t& _weight);

	string getSensorType() const;
	string getConnectiontype() const;
	uint16_t getFrequency() const;
	uint16_t getNumberOfButtons() const;
	uint16_t getResponseTime() const;
	uint16_t getDPI() const;
	uint16_t getWeight() const;

	void printDataMouse() const;
};