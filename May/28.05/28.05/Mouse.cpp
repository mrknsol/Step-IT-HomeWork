#include "mouse.h"


mouse::mouse(string& _make, string& _model, uint16_t& _serialNumber, string& _sensortype, string& _connectionType, uint16_t& _frequency, uint16_t& _numberOfButtons,
	uint16_t& _responseTime, uint16_t& _DPI, uint16_t& _weight) : components(_make, _model, _serialNumber)
{
	this->sensorType = _sensortype;
	this->connectionType = _connectionType;
	*this->frequency = _frequency;
	*this->numberOfButtons = _numberOfButtons;
	*this->responseTime = _responseTime;
	*this->DPI = _DPI;
	*this->weight = _weight;
}

string mouse::getSensorType() const
{
	return this->sensorType;
}

string mouse::getConnectiontype() const
{
	return this->connectionType;
}

uint16_t mouse::getFrequency() const
{
	return *this->frequency;
}

uint16_t mouse::getNumberOfButtons() const
{
	return *this->numberOfButtons;
}

uint16_t mouse::getResponseTime() const
{
	return *this->responseTime;
}

uint16_t mouse::getDPI() const
{
	return *this->DPI;
}

uint16_t mouse::getWeight() const
{
	return *this->weight;
}

void mouse::printDataMouse() const
{
	cout
		<< "Mouse make: " << this->make << endl
		<< "Mouse model: " << this->model << endl
		<< "Mouse sensor type: " << this->sensorType << endl
		<< "Mouse connection type: " << this->connectionType << endl
		<< "Mouse frequency: " << *this->frequency << endl
		<< "Mouse numbers of buttons: " << *this->numberOfButtons << endl
		<< "Mouse response time: " << *this->responseTime << endl
		<< "Mouse DPI: " << *this->DPI << endl
		<< "Mouse weight: " << *this->weight << endl;
}