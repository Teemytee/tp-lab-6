#pragma once
#include "Employee.h"
#include "WorkTime.h"
#include "Project.h"

class Engineer :public Employee, public WorkTime, public Project {
protected:
	int base;
	int worktime;
	float contribution;
	int budget;
public:
	Engineer(int id, string name, int base, int worktime, float contribution, int budget):Employee(id, name)
	{
		this->base = base;
		this->worktime = worktime;
		this->contribution = contribution;
		this->budget = budget;
	}
	int salary_time() override 
	{
		return this->worktime * this->base;
	}
	float salary_proj() override
	{
		return this->budget*this->contribution;
	}
	void calculate_payment()override
	{
		this->payment += this->salary_time() + this->salary_proj();
	}
};