#include "CPU.h"

CPU::CPU(string& _make, string& _model, uint16_t& _serialNumber, uint16_t& _frequency, string& _performance, string& _socket) : components(_make, _model, _serialNumber)
{
	*this->frequency = _frequency;
	this->performance = _performance;
	this->socket = _socket;
}


uint16_t CPU::getFrequency() const
{
	return *this->frequency;
}

string CPU::getPerformance() const
{
	return this->performance;
}

string CPU::getSocket() const
{
	return this->socket;
}

void CPU::printDataCPU() const
{
	cout
		<< "CPU make: " << this->make << endl
		<< "CPU model: " << this->model << endl
		<< "CPU frequency: " << *this->frequency << endl
		<< "CPU performance: " << this->performance << endl
		<< "CPU socket: " << this->socket << endl;
}