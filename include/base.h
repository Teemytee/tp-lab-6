#ifndef BASE_CLASSES
#define BASE_CLASSES

#include <string>

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

protected:
	int id;
	std::string name;
	float worktime;
	float payment;
};

Employee::~Employee() = default;

class Project {};

class Heading {};

class WorkTime {};

#endif // !BASE_CLASSES
