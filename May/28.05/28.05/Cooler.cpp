#include "Cooler.h"

Cooler::Cooler(string& _make, string& _model, uint16_t _serialNumber, string& _purpose, string& _socket, string& _connectorType, string& _material,
	uint16_t& _numberOfHeatPipes, uint16_t& _numberOfFans, uint16_t& _rotationalSpeed, uint16_t& _noiseLevel, uint16_t& _weight) : components(_make, _model, _serialNumber)
{
	this->purpose = _purpose;
	this->socket = _socket;
	this->connectorType = _connectorType;
	this->material = _material;
	*this->numberOfHeatPipes = _numberOfHeatPipes;
	*this->numberOfFans = _numberOfFans;
	*this->rotationalSpeed = _rotationalSpeed;
	*this->noiseLevel = _noiseLevel;
	*this->weight = _weight;
}


string Cooler::getPurpose() const
{
	return this->purpose;
}

string Cooler::getSocket() const
{
	return this->socket;
}

string Cooler::getConnectorType() const
{
	return this->connectorType;
}

string Cooler::getMaterial() const
{
	return this->material;
}

uint16_t Cooler::getNumberOfHeatPipes() const
{
	return *this->numberOfHeatPipes;
}

uint16_t Cooler::getNumberOfFans() const
{
	return *this->numberOfFans;
}

uint16_t Cooler::getRotationalSpeed() const
{
	return *this->rotationalSpeed;
}

uint16_t Cooler::getNoiseLevel() const
{
	return *this->noiseLevel;
}

uint16_t Cooler::getWeight() const
{
	return *this->weight;
}

void Cooler::printDataCooler() const
{
	cout
		<< "Cooler make: " << this->make << endl
		<< "cooler model: " << this->model << endl
		<< "Cooler purpose: " << this->purpose << endl
		<< "Cooler socket: " << this->socket << endl
		<< "Cooler connectortype: " << this->connectorType << endl
		<< "Cooler material: " << this->material << endl
		<< "Cooler number of heat pipes: " << *this->numberOfHeatPipes << endl
		<< "Cooler numbers of fans: " << *this->numberOfFans << endl
		<< "Cooler rotational speed: " << *this->rotationalSpeed << endl
		<< "Cooler noise level: " << *this->noiseLevel << endl
		<< "Cooler weight: " << *this->weight << endl;
}