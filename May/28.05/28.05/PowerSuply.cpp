#include "PowerUnit.h"

powerUnit::powerUnit(string& _make, string& _model, uint16_t& _serialNumber, uint16_t& _power,
	uint16_t& _tension, uint16_t& _current, uint16_t& _efficiency) : components(_make, _model, _serialNumber)
{
	*this->power = _power;
	*this->tension = _tension;
	*this->current = _current;
	*this->efficiency = _efficiency;
}

uint16_t powerUnit::getPower() const
{
	return *this->power;
}

uint16_t powerUnit::getTension() const
{
	return *this->tension;
}

uint16_t powerUnit::getCurrent() const
{
	return *this->current;
}

uint16_t powerUnit::getEfficiency() const
{
	return *this->efficiency;
}

void powerUnit::printDataPowerUnit() const
{
	cout
		<< "Power Unit make: " << this->make << endl
		<< "Power Unit model: " << this->model << endl
		<< "Power Unit power: " << *this->power << endl
		<< "Power Unit tension: " << *this->tension << endl
		<< "Power Unit current: " << *this->current << endl
		<< "Power Unit efficiency: " << *this->efficiency << endl;
}