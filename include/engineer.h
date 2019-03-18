#ifndef ENGINEER
#define ENGINEER

#include "base.h"

class Engineer : public Employee, public WorkTime { //TODO Worktime really public?
public:
	virtual ~Engineer() = 0;
protected:
	float salary;
};

Engineer::~Engineer() = default;

class Programmer : public Engineer {
public:
	Programmer(int id, std::string name, float salary) {
		this->id = id;
		this->name = std::move(name);
		this->salary = salary;
	};
	~Programmer() = default;
};

class TeamLeader : public Programmer, public Heading { //TODO Worktime really public?
public:
	TeamLeader(int id, std::string name, float salary) : Programmer(id, name, salary) {};
};

#endif // !ENGINEER
