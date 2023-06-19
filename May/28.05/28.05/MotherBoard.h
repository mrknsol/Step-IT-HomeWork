#pragma once
#include "RAM.h"
#include "CPU.h"
#include "GraphicCard.h"
#include <string>
#include <iostream>
using namespace std;

class motherBoard : public components
{
public:
	RAM* raM{};
	CPU* cpU{};
	graphicCard* graphicCarD{};

	motherBoard(string& _make, string& _model, uint16_t& _serialNumber, RAM& _RAM, CPU& _CPU, graphicCard& _graphicCard);

	void printDataMotherBoard() const;
};