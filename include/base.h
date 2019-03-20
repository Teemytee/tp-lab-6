#ifndef BASE_CLASSES
#define BASE_CLASSES

#include <string>
#include <fstream>
#include <vector>
#include <memory>
#include <iostream>

class Employee
{
public:
	virtual ~Employee() = 0; // pure virtual saves from instantiating Employee

	int get_id() {
		return this->id;
	}

	const std::string &get_name() {
		return this->name;
	}

	float get_worktime() {
		return this->worktime;
	}

	float get_payment() {
		return this->payment;
	}

protected:
	int id;
	std::string name;
	float worktime;
	float payment;
};

Employee::~Employee() = default;

class Project {
	// Do I need destructors here?
public:
	virtual void calculate_share() = 0;
};

class Heading {
public:
	virtual void calculate_head() = 0;
};

class WorkTime {
public:
	virtual void calculate_work_pay(int) = 0;
};

#endif // !BASE_CLASSES
