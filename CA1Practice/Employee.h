#pragma once
#include <string>
#include <iostream>

using namespace std;

class Employee
{
public:
	Employee();
	Employee(string name, int age, string role);
	~Employee();
	bool operator<(const Employee &) const;
	bool operator>(const Employee &) const;

	void printName();

private:
	string name;
	int age;
	string role;

};

