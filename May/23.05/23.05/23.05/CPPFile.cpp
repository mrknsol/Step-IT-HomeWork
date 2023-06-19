#include "23.05.h"

uint16_t birthday::getDay()
{
	return day;
}

uint16_t birthday::getMonth()
{
	return month;
}

uint16_t birthday::getYear()
{
	return year;
}


string student::getNameUNI()
{
	return this->nameOfAcademy;
}

string student::getCountryUNI()
{
	return this->CountryOfAcademy;
}

string student::getCityUNI()
{
	return this->CityOfAcademy;
}

void student::printDataStudent() const
{
	cout
		<< "Student name: " << this->name << endl
		<< "Student surname: " << this->surname << endl
		<< "Student day of birth: " << this->DateOfBirth->getDay() << endl
		<< "Student month of birth: " << this->DateOfBirth->getMonth() << endl
		<< "Student year of birth: " << this->DateOfBirth->getYear() << endl
		<< "Student contact number: " << this->phoneNumber << endl
		<< "Student city: " << this->city << endl
		<< "Sudent country: " << this->country << endl
		<< "Sudent group name: " << this->nameOfGroup << endl;
}

void student::getDateOfBirth(int choice) const
{
	switch (choice)
	{
	case 1:
		DateOfBirth->getDay();
		break;
	case 2:
		DateOfBirth->getMonth();
		break;
	case 3:
		DateOfBirth->getYear();
		break;
	}
}