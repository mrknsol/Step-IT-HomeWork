#pragma once
#include <iostream>
#include <string>

using namespace std;

class components
{
protected:
	string make{};
	string model{};
	uint16_t* serialNumber = new uint16_t{};
public:
	components(string _make, string _model, uint16_t _serialNumber);

	string getMake() const;
	string getModel() const;
	uint16_t getSerialNumber() const;
};