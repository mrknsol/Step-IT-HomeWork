#pragma once
#include <string>
#include <iostream>
#include "Components.h"
using namespace std;

class graphicCard : public components
{
private:
	string CUDA{};
	uint16_t* frequency = new uint16_t{};
	uint16_t* powerConsumption = new uint16_t{};
	uint16_t* transistors = new uint16_t{};
public:
	graphicCard(string& _make, string& _model, uint16_t& _serialNumber, string& _CUDA,
		uint16_t& _frequency, uint16_t& _powerConsumption, uint16_t& _transistors);

	string getCUDA() const;
	uint16_t getFrequency() const;
	uint16_t getPowerConsumption() const;
	uint16_t getTransistors() const;

	void pruitnDataGraphicCard() const;
};