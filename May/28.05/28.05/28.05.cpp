#include "Computer.h"

systemUnit createSystemUnit()
{
	string data[6]{};
	uint16_t* dataint = new uint16_t[6]{};

	//Enter RAM
	cout << "Enter RAM make: " << endl; cin >> data[0];
	cout << "Enter RAM model: " << endl; cin >> data[1];
	cout << "Enter RAM serial number: " << endl; cin >> dataint[0];
	cout << "Enter RAM Form Factor: " << endl; cin >> data[2];
	cout << "Enter RAM clock frequency: " << endl; cin >> dataint[1];
	cout << "Enter RAM throughput: " << endl; cin >> dataint[2];
	cout << "Enter RAM timings: " << endl; cin >> dataint[3];
	cout << "Enter RAM volume: " << endl; cin >> dataint[4];

	RAM _RAM(data[0], data[1], dataint[0], data[2], dataint[1], dataint[2], dataint[3], dataint[4]);

	//Enter CPU
	cout << "Enter CPU make: " << endl; cin >> data[0];
	cout << "Enter CPU model: " << endl; cin >> data[1];
	cout << "Enter CPU serial number: " << endl; cin >> dataint[0];
	cout << "Enter CPU frequency: " << endl; cin >> dataint[1];
	cout << "Enter CPU performance: " << endl; cin >> data[2];
	cout << "Enter CPU socket: " << endl; cin >> data[3];

	CPU _CPU(data[0], data[1], dataint[0], dataint[1], data[2], data[3]);

	//Enter graphic card
	cout << "Enter graphic card make: " << endl; cin >> data[0];
	cout << "Enter graphic card model: " << endl; cin >> data[1];
	cout << "Enter graphic card serial number: " << endl; cin >> dataint[0];
	cout << "Enter graphic card CUDA: " << endl; cin >> data[2];
	cout << "Enter graphic card frequency: " << endl; cin >> dataint[1];
	cout << "Enter graphic card power consumption: " << endl; cin >> dataint[2];
	cout << "Enter graphic card transistors: " << endl; cin >> dataint[3];

	graphicCard _graphicCard(data[0], data[1], dataint[0], data[2], dataint[1], dataint[2], dataint[3]);

	//Create mother board
	cout << "Enter mother board make: " << endl; cin >> data[0];
	cout << "Enter mother board model: " << endl; cin >> data[1];
	cout << "Enter mother board serial number: " << endl; cin >> dataint[0];

	motherBoard _motherBoard(data[0], data[1], dataint[0], _RAM, _CPU, _graphicCard);

	//Enter storage device
	cout << "Enter storage device make: " << endl; cin >> data[0];
	cout << "Enter storage device model: " << endl; cin >> data[1];
	cout << "Enter storage device serial number: " << endl; cin >> dataint[0];
	cout << "Enter storage device reading speed: " << endl; cin >> dataint[1];
	cout << "Enter storage device write speed: " << endl; cin >> dataint[2];
	cout << "Enter storage device power consuption: " << endl; cin >> dataint[3];
	cout << "Enter storage device weight: " << endl; cin >> dataint[4];
	cout << "Enter storage device capacity: " << endl; cin >> dataint[5];

	storageDevice _storageDevice(data[0], data[1], dataint[0], dataint[1], dataint[2],
		dataint[3], dataint[4], dataint[5]);

	//Enter power unit
	cout << "Enter power unit make: " << endl; cin >> data[0];
	cout << "Enter power unit model: " << endl; cin >> data[1];
	cout << "Enter power unit serial number: " << endl; cin >> dataint[0];
	cout << "Enter power unit power: " << endl; cin >> dataint[1];
	cout << "Enter power unit tension: " << endl; cin >> dataint[2];
	cout << "Enter power unit current: " << endl; cin >> dataint[3];
	cout << "Enter power unit efficiency: " << endl; cin >> dataint[4];

	powerUnit _powerUnit(data[0], data[1], dataint[0], dataint[1], dataint[2], dataint[3], dataint[4]);

	//Enter cooler
	cout << "Enter cooler make: " << endl; cin >> data[0];
	cout << "Enter cooler model: " << endl; cin >> data[1];
	cout << "Enter CPU serial number: " << endl; cin >> dataint[0];
	cout << "Enter cooler purpose: " << endl; cin >> data[2];
	cout << "Enter cooler socket: " << endl; cin >> data[3];
	cout << "Enter cooler connector type: " << endl; cin >> data[4];
	cout << "Enter cooler material: " << endl; cin >> data[5];
	cout << "Enter cooler number of heat pipes: " << endl; cin >> dataint[1];
	cout << "Enter cooler number of fans: " << endl; cin >> dataint[2];
	cout << "Enter cooler ratational speed: " << endl; cin >> dataint[3];
	cout << "Enter cooler noise level: " << endl; cin >> dataint[4];
	cout << "Enter cooler weight: " << endl; cin >> dataint[5];

	Cooler _cooler(data[0], data[1], dataint[0], data[2], data[3], data[4], data[5], dataint[1],
		dataint[2], dataint[3], dataint[4], dataint[5]);

	//Enter system unit
	cout << "Enter system unit make: " << endl; cin >> data[0];
	cout << "Enter system unit model: " << endl; cin >> data[1];
	cout << "Enter system unit serial number: " << endl; cin >> dataint[0];

	systemUnit systemUnit(data[0], data[1], dataint[0], _motherBoard, _powerUnit, _storageDevice, _cooler);

	return systemUnit;
}

monitor createMonitor()
{
	string data1[5]{};
	uint16_t* data2 = new uint16_t[6]{};

	cout << "Enter monitor make: " << endl; cin >> data1[0];
	cout << "Enter monitor model: " << endl; cin >> data1[1];
	cout << "Enter monitor serial number: " << endl; cin >> data2[0];
	cout << "Enter monitor screen cover: " << endl; cin >> data1[2];
	cout << "Enter monitor brightness: " << endl; cin >> data1[3];
	cout << "Enter monitor contrast: " << endl; cin >> data1[4];
	cout << "Enter monitor maximum resolution: " << endl; cin >> data2[1];
	cout << "Enter monitor pixel response time: " << endl; cin >> data2[2];
	cout << "Enter monitor pixel size: " << endl; cin >> data2[3];
	cout << "Enter monitor pixel density: " << endl; cin >> data2[4];
	cout << "Enter monitor maximum screen refresh rate: " << endl; cin >> data2[5];

	monitor Monitor(data1[0], data1[1], data2[0], data1[2], data1[3], data1[4],
		data2[1], data2[2], data2[3], data2[4], data2[5]);

	return Monitor;
}

keyboard createKeyboard()
{
	string data1[6]{};
	uint16_t* data2 = new uint16_t[2]{};

	cout << "Enter keyboard make: " << endl; cin >> data1[0];
	cout << "Enter keyboard model: " << endl; cin >> data1[1];
	cout << "Enter keyboard serial number: " << endl; cin >> data2[0];
	cout << "Enter keyboard type: " << endl; cin >> data1[2];
	cout << "Enter keyboard connection type: " << endl; cin >> data1[3];
	cout << "Enter keyboard spill resistance: " << endl; cin >> data1[4];
	cout << "Enter keyboard compatible with OC: " << endl; cin >> data1[5];
	cout << "Enter keyboard compatible with OC: " << endl; cin >> data2[1];

	keyboard Keyboard(data1[0], data1[1], data2[0], data1[2], data1[3], data1[4], data1[5], data2[1]);

	return Keyboard;
}

mouse createMouse()
{
	string data1[4]{};
	uint16_t* data2 = new uint16_t[6]{};

	cout << "Entermouse make: " << endl; cin >> data1[0];
	cout << "Entermouse model: " << endl; cin >> data1[1];
	cout << "Enter mouse serial number: " << endl; cin >> data2[0];
	cout << "Entermouse sensor type: " << endl; cin >> data1[2];
	cout << "Entermouse connection type: " << endl; cin >> data1[3];
	cout << "Entermouse frequency: " << endl; cin >> data2[1];
	cout << "Entermouse number od buttons: " << endl; cin >> data2[2];
	cout << "Entermouse response time: " << endl; cin >> data2[3];
	cout << "Entermouse DPI: " << endl; cin >> data2[4];
	cout << "Entermouse weight: " << endl; cin >> data2[5];

	mouse Mouse(data1[0], data1[1], data2[0], data1[2], data1[3], data2[1], data2[2],
		data2[3], data2[4], data2[5]);

	return Mouse;
}

int main()
{
	string data[2]{};
	cout << "Enter computer make: " << endl; cin >> data[0];
	cout << "Enter computer model: " << endl; cin >> data[1];

	systemUnit* SystemUnit = new systemUnit(createSystemUnit());
	monitor* Monitor = new monitor(createMonitor());
	keyboard* Keyboard = new keyboard(createKeyboard());
	mouse* Mouse = new mouse(createMouse());

	Computer* ComputeR = new Computer(data[0], data[1], *SystemUnit, *Monitor, *Keyboard, *Mouse);

	ComputeR->printDataComputer();

	return 0;
}