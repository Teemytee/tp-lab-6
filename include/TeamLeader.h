#pragma once
#include "Employee.h"
#include "Engineer.h"

class TeamLeader :public Programmer, protected virtual Heading
{
private:
	unsigned int n_stuff;
public:
	TeamLeader(unsigned int id, string fio, unsigned int worktime, double base, PROJECT *project, unsigned int n_stuff) :
		Programmer(id, fio, worktime, base, project) 
	{
		this->n_stuff = n_stuff;
	};
	double pay_for_staff()
	{
		return this->n_stuff * 20;
	}
	void calcSalary()
	{
		this->payment += (pay_per_hour() + pay_for_project()+pay_for_staff());
	}
	~TeamLeader() {};
};