#include "GraphicCard.h"

graphicCard::graphicCard(string& _make, string& _model, uint16_t& _serialNumber, string& _CUDA,
	uint16_t& _frequency, uint16_t& _powerConsumption, uint16_t& _transistors) : components(_make, _model, _serialNumber)
{
	this->CUDA = _CUDA;
	*this->frequency = _frequency;
	*this->powerConsumption = _powerConsumption;
	*this->transistors = _transistors;
}

string graphicCard::getCUDA() const
{
	return this->CUDA;
}

uint16_t graphicCard::getFrequency() const
{
	return *this->frequency;
}

uint16_t graphicCard::getPowerConsumption() const
{
	return *this->powerConsumption;
}

uint16_t graphicCard::getTransistors() const
{
	return *this->transistors;
}

void graphicCard::pruitnDataGraphicCard() const
{
	cout
		<< "Graphic Card make: " << this->make << endl
		<< "Graphic Card model: " << this->model << endl
		<< "Graphic Card CUDA: " << this->CUDA << endl
		<< "Graphic Card frequency: " << *this->frequency << endl
		<< "Graphic Card power consumption: " << *this->powerConsumption << endl
		<< "Graphic Card transistors: " << *this->transistors << endl;
}