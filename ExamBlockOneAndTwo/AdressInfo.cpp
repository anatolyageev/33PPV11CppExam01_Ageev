#include "pch.h"
#include "AdressInfo.h"

AdressInfo::~AdressInfo()
{
}

AdressInfo::AdressInfo()
{
	this->city = "anyCyty";
	this->street = "anyStreet";
	this->bildingNumber = 0;
	this->flatNumber = 0;
}

AdressInfo::AdressInfo(string city, string street, int bildingNumber, int flatNumber) {
	this->city = city;
	this->street = street;
	this->bildingNumber = bildingNumber;
	this->flatNumber = flatNumber;
}

ostream& operator<<   (ostream& os, const AdressInfo& t)
{
	os << t.city << " " << t.street << endl;
	os << t.bildingNumber << " " << t.flatNumber << endl;
	return os;
}

