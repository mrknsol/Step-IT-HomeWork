#include "StorageDevice.h"


storageDevice::storageDevice(string& _make, string& _model, uint16_t& _serialNumber, uint16_t& _readingSpeed, uint16_t& _writeSpeed
	, uint16_t& _powerConsumption, uint16_t& _weight, uint16_t& _capacity) : components(_make, _model, _serialNumber)
{
	*this->readingSpeed = _readingSpeed;
	*this->writeSpeed = _writeSpeed;
	*this->powerConsumption = _powerConsumption;
	*this->weight = _weight;
	*this->capacity = _capacity;
}

uint16_t storageDevice::getReadingSpeed() const
{
	return *this->readingSpeed;
}

uint16_t storageDevice::getWriteSpeed() const
{
	return *this->writeSpeed;
}

uint16_t storageDevice::getPowerConsuption() const
{
	return *this->powerConsumption;
}

uint16_t storageDevice::getWeight() const
{
	return *this->weight;
}

uint16_t storageDevice::getCapacity() const
{
	return *this->capacity;
}

void storageDevice::printDataStorageDevice() const
{
	cout
		<< "Storage device make: " << this->make << endl
		<< "Storage device model: " << this->model << endl
		<< "Storage device reading speed: " << *this->readingSpeed << endl
		<< "Storage device write speed: " << *this->writeSpeed << endl
		<< "Storage device power consuption: " << *this->powerConsumption << endl
		<< "Storage device weight: " << *this->weight << endl
		<< "Storage device capacity: " << *this->capacity << endl;
}