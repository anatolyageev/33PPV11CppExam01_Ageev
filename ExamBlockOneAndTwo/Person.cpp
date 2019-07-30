#include "pch.h"
#include "Person.h"

Person::Person() {
	this->phoneNumber = "+38000000000";
}

Person::Person(bool sex, int age, string name, string surname, string city, string street, int bildingNumber, int flatNumber, string phoneNumber):HumanEntity(sex,age,name,surname), AdressInfo(city,street, bildingNumber, flatNumber){
	this->phoneNumber = phoneNumber;
}

Person::~Person() {}

ostream& operator<<   (ostream& os, const Person& t)
{
	
	os << (HumanEntity&)t;
	os << (AdressInfo&)t;
	os << t.phoneNumber;

	return os;
}