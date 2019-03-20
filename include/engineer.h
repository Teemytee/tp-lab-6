#ifndef ENGINEER
#define ENGINEER

#include "base.h"

class Engineer : public Employee, public WorkTime, public Project { //TODO Worktime really public?
public:
	virtual ~Engineer() = 0;
	void calculate_work_pay(int hours) override { //hot to separate to .cpp?
		this->worktime += hours;
		this->payment += this->salary * 1 * hours;
	};
	void calculate_share(int hours) override {
		this->payment += this->salary * 0.15 * this->projects;
	};
	float get_salary();
	int get_projects();
protected:
	float salary;
	//int projects;
};

class Tester : public Engineer {
public:
	Tester(int, std::string, float, int);
	~Tester();
};

class Programmer : public Engineer {
public:
	Programmer(int, std::string, float, int);
	~Programmer();
};

class TeamLeader : public Programmer, public Heading {
public:
	TeamLeader(int, std::string, float, int);
	void calculate_head() override {
		this->payment += this->salary * 0.35;
	};
	~TeamLeader();
protected:
	float head;
};

#endif // !ENGINEER
