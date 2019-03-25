#pragma once
#include "Employee.h"

class Engineer : public Employee, protected virtual WorkTime,protected virtual Project
{
private:
	double base;
	PROJECT *project;
	float impact;
public:
	Engineer(unsigned int id, string fio, unsigned int worktime, double base, PROJECT *project, float impact) :
		Employee(id, fio, worktime)
	{
		this->impact = impact;
		this->base = base;
		this->project = project;
	}
	double pay_per_hour()
	{
		return this->worktime * this->base;
	}
	 double pay_for_project()
	{
		 return project->project_payment*this->impact;
	}
	void calcSalary()
	{
		this->payment += (pay_per_hour()+pay_for_project());
	}
	void printBio()
	{
		Employee::printBio();
	}
};

extern float prog_impact = 0.1 *2.5;
extern float test_impact = 0.1 *1.5;

class Programmer :public Engineer
{
public:
	Programmer(unsigned int id, string fio, unsigned int worktime, double base, PROJECT *project):
		Engineer(id, fio, worktime, base,project,prog_impact) {};
	~Programmer() {};
};
class Tester :public Engineer
{
public:
	Tester(unsigned int id, string fio, unsigned int worktime, double base, PROJECT *project) :
		Engineer(id, fio, worktime, base, project, test_impact) {};
	~Tester() {};
};
