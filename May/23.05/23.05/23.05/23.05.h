#pragma once
#include <iostream>
using namespace std;

struct birthday
{
private:
	uint16_t day{};
	uint16_t month{};
	uint16_t year{};
public:
	birthday(uint16_t day, uint16_t month, uint16_t year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}

	uint16_t getDay();
	uint16_t getMonth();
	uint16_t getYear();
};

class student
{
private:
	birthday* DateOfBirth{};
	string nameOfAcademy{};
	string CountryOfAcademy{};
	string CityOfAcademy{};
public:
	string name{};
	string surname{};
	string phoneNumber{};
	string city{};
	string country{};
	string nameOfGroup{};

	student(string nameOfAcademy, string CountryOfAcademy, string CityOfAcademy,
		string name, string surname, string phoneNumber, string city, string country,
		string nameOfGroup, uint16_t day, uint16_t month, uint16_t year)
	{
		this->nameOfAcademy = nameOfAcademy;
		this->CountryOfAcademy = CountryOfAcademy;
		this->CityOfAcademy = CityOfAcademy;
		this->name = name;
		this->surname = surname;
		this->phoneNumber = phoneNumber;
		this->city = city;
		this->country = country;
		this->nameOfGroup = nameOfGroup;
		birthday* d = new birthday(day, month, year);
		DateOfBirth = d;
	}

	string getNameUNI();
	string getCountryUNI();
	string getCityUNI();

	void printDataStudent() const;

	void getDateOfBirth(int c) const;
};

class Database
{
public:
	student* person{};
	uint16_t count{};
};