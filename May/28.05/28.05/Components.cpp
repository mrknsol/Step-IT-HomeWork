#include "Components.h"

components::components(string _make, string _model, uint16_t _serialNumber)
{
	this->make = _make;
	this->model = _model;
	*this->serialNumber = _serialNumber;
}

string components::getMake() const
{
	return this->make;
}

string components::getModel() const
{
	return this->model;
}

uint16_t components::getSerialNumber() const
{
	return *this->serialNumber;
}