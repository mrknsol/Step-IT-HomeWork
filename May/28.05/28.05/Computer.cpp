#include "Computer.h"

Computer::Computer(string& _make, string& _model, systemUnit& _SystemUnit, monitor& _Monitor, keyboard& _Keyboard, mouse& _Mouse)
{
	this->make = _make;
	this->model = _model;
	this->SystemUnit = new systemUnit(_SystemUnit);
	this->Monitor = new monitor(_Monitor);
	this->Keyboard = new keyboard(_Keyboard);
	this->Mouse = new mouse(_Mouse);
}

string Computer::getMake() const
{
	return this->make;
}

string Computer::getModel() const
{
	return this->model;
}

void Computer::printDataComputer() const
{
	cout
		<< "Computer make: " << this->make << endl
		<< "Computer model: " << this->model << endl;

	this->SystemUnit->printDataSystemUnit();
	this->Monitor->printDataMonitor();
	this->Keyboard->printDataKeyboard();
	this->Mouse->printDataMouse();
}