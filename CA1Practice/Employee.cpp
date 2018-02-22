#include "Employee.h"



Employee::Employee()
{
}

Employee::Employee(string name, int age, string role)
{
	this->name = name;
	this->age = age;
	this->role = role;
}


Employee::~Employee()
{
}

bool Employee::operator<(const Employee &rhs) const {
	return this->name.compare(rhs.name) < 0;
}

bool Employee::operator>(const Employee &rhs) const {
	return this->name.compare(rhs.name) > 0;
}

//bool Employee::operator<(const Employee &rhs) const {
//	return this->name < rhs.name;
//}
//
//bool Employee::operator>(const Employee &rhs) const {
//	return this->name > rhs.name;
//}
//
//bool Employee::operator<(const Employee &rhs) const {
//	return this->age > rhs.age;
//	//return false;
//}
//
//bool Employee::operator>(const Employee &rhs) const {
//	return this->age < rhs.age;
//	//return false;
//}


void Employee::printName() {
	cout << name << " Age: " << age << " Role: " << role << endl;
}