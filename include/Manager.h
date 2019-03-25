#pragma once
#include "Employee.h"

class Manager : public Employee,  protected virtual Project
{
private:
	PROJECT *project;
	float impact=1;
public:
	Manager(unsigned int id, string fio, PROJECT *project, float impact) :
		Employee(id, fio, 0)
	{
		this->project = project;
		this->impact=impact;
	}
	double pay_for_project()
	{
		return this->project->project_payment*this->impact;
	}
	void calcSalary()
	{
		this->payment +=pay_for_project();
	}
	void printBio()
	{
		Employee::printBio();
	}
};

class ProjectManager :public Manager, protected virtual Heading
{
	unsigned int n_stuff;
public:
	ProjectManager(unsigned int id, string fio, PROJECT *project,float impact, unsigned int n_stuff) :
		Manager(id, fio,project,impact) 
	{
		this->n_stuff = n_stuff;
	};
	double pay_for_staff()
	{
		return this->n_stuff * 150;
	}
	void calcSalary()
	{
		this->payment += pay_for_project()+pay_for_staff();
	}
	~ProjectManager() {};
};

class SeniorManager:public ProjectManager
{
	unsigned int n_stuff;
	float senior_bonus=1.3;
public:
	SeniorManager(unsigned int id, string fio, PROJECT *project, float impact, unsigned int n_stuff) :
		ProjectManager( id, fio,project,impact, n_stuff) {};

	void calcSalary()
	{
		this->payment += (pay_for_project() + pay_for_staff())*senior_bonus;
	}
	~SeniorManager() {};
};