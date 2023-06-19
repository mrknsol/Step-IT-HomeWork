#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "SystemUnit.h" 
#include "monitor.h"
#include "mouse.h"
#include "Keyboard.h"

class Computer
{
private:
	string make{};
	string model{};
public:
	systemUnit* SystemUnit{};
	monitor* Monitor{};
	keyboard* Keyboard{};
	mouse* Mouse{};

	Computer(string& _make, string& _model, systemUnit& _SystemUnit, monitor& Monitor, keyboard& Keyboard, mouse& _Mouse);

	string getMake() const;
	string getModel() const;

	void printDataComputer() const;
};