#include "pch.h"
#include "Person.h"

Person::Person() {
	this->phoneNumber = "+38000000000";

}

Person::Person(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

Person::~Person() {}

ostream& operator<<   (ostream& os, const Person& t)
{
	os << t.phoneNumber << endl;

	return os;
}