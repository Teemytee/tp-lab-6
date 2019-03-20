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
	virtual ~Employee() = 0;
	int get_id();
	const std::string &get_name() const;
	float get_worktime();
	float get_payment();

protected:
	int id;
	std::string name;
	float worktime;
	float payment;
};

class Project {
	// Do I need destructors here?
public:
	virtual void calculate_share(int) = 0;
protected:
	int projects;
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
