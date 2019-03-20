#ifndef ENGINEER
#define ENGINEER

#include "base.h"

class Engineer : public Employee, public WorkTime, public Project { //TODO Worktime really public?
public:
	virtual ~Engineer() = 0;
	void calculate_work_pay(int hours) override {
		this->worktime += hours;
		this->payment += this->salary * 1 * hours;
	};
	void calculate_share() override {
		this->payment += this->salary * 0.15;
	};
	float get_salary() {
		return this->salary;
	}
	int get_projects() {
		return this->projects;
	}
protected:
	float salary;
	int projects;
};

Engineer::~Engineer() = default;

class Tester : public Engineer {
public:
	Tester(int id, std::string name, float salary, int projects) {
		this->id = id;
		this->name = std::move(name);
		this->worktime = 0;
		this->salary = salary;
		this->payment = 0;
		this->projects = projects;
	};
	~Tester() = default;
};

class Programmer : public Engineer {
public:
	Programmer(int id, std::string name, float salary, int projects) {
		this->id = id;
		this->name = std::move(name);
		this->worktime = 0;
		this->salary = salary;
		this->payment = 0;
		this->projects = projects;
	};
	~Programmer() = default;
};

class TeamLeader : public Programmer, public Heading {
public:
	TeamLeader(int id, std::string name, float salary, int projects) : Programmer(id, name, salary, projects) {};
	void calculate_head() override {
		this->payment += this->salary * 0.35;
	};
protected:
	float head;
};

#endif // !ENGINEER
