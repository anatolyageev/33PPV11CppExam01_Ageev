#pragma once
#include <iostream>
#include <string>

using namespace std;

class AdressInfo
{
protected:
	string city;
	string street;
	int bildingNumber;
	int flatNumber;
public:
	string getCity() { return this->city; }
	string getStreet() { return this->street; }
	int getBildingNumber() { return this->bildingNumber; }
	int getFlatNumber() { return this->flatNumber; }
	void setCity(string city) { this->city = city; }
	void setStreet(string street) { this->street = street; }
	void setBildingNumber(int bildingNumber) { this->bildingNumber = bildingNumber; }
	void setFlatNumber(int flatNumber) { this->flatNumber = flatNumber; }
	friend ostream& operator<<   (ostream& os, const AdressInfo& t);
	AdressInfo(const AdressInfo& obj) {}
	AdressInfo();
	AdressInfo(string city,	string street, int bildingNumber, int flatNumber);
	~AdressInfo();
};
