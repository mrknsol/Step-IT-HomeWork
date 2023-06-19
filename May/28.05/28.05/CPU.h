#pragma once
#include <string>
#include <iostream>
#include "Components.h"
using namespace std;

class CPU : public components
{
private:
	uint16_t* frequency = new uint16_t{};
	string performance{};
	string socket{};
public:
	CPU(string& _make, string& _model, uint16_t& _serialNumber, uint16_t& _frequency, string& _performance, string& _socket);

	uint16_t getFrequency() const;
	string getPerformance() const;
	string getSocket() const;

	void printDataCPU() const;
};