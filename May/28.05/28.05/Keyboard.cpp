#include "Keyboard.h"

keyboard::keyboard(string& _make, string& _model, uint16_t& _serialNumber, string& _type, string& _connectionType, string& _spillResistance, string& _compatibleWithOC,
	uint16_t& _pollingFrequency) : components(_make, _model, _serialNumber)
{
	this->type = _type;
	this->connectionType = _connectionType;
	this->spillResistance = _spillResistance;
	this->compatibleWithOC = _compatibleWithOC;
	*this->pollingFrequency = _pollingFrequency;
}

string keyboard::getType() const
{
	return this->type;
}

string keyboard::getConnectionType() const
{
	return this->connectionType;
}

string keyboard::getSpillResistance() const
{
	return this->spillResistance;
}

string keyboard::getCompatibleWithOC() const
{
	return this->compatibleWithOC;
}

uint16_t keyboard::getPollingFrequency() const
{
	return *this->pollingFrequency;
}

void keyboard::printDataKeyboard() const
{
	cout
		<< "Keyboard make: " << this->make << endl
		<< "Keyboard model: " << this->model << endl
		<< "Keyboard type: " << this->type << endl
		<< "Keybard connection type: " << this->connectionType << endl
		<< "Keyboard spill resistance: " << this->spillResistance << endl
		<< "Keyboard compatible with OC: " << this->compatibleWithOC << endl
		<< "Keyboard polling frequency: " << *this->pollingFrequency << endl;
}