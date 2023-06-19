#include "MotherBoard.h"

motherBoard::motherBoard(string& _make, string& _model, uint16_t& _serialNumber, RAM& _RAM, CPU& _CPU, graphicCard& _graphicCard) : components(_make, _model, _serialNumber)
{
	this->raM = new RAM(_RAM);
	this->cpU = new CPU(_CPU);
	this->graphicCarD = new graphicCard(_graphicCard);
}

void motherBoard::printDataMotherBoard() const
{
	cout
		<< "Mother Board make: " << this->make << endl
		<< "Mother Board mpdel: " << this->model << endl;

	this->raM->printDataRAM();
	this->cpU->printDataCPU();
	this->graphicCarD->pruitnDataGraphicCard();
}