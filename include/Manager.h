#pragma once
#include "Employee.h"
#include "Project.h"

class Manager :public Employee, public Project {
protected:
	float contribution;
	int budget;
public:
	Manager(int id, string name, float contribution, int budget):Employee(id, name) 
	{
		this->contribution = contribution;
		this->budget = budget;
	}
	float salary_proj() override
	{
		return this->budget*this->contribution;
	}
	void calculate_payment()override 
	{
		this->payment += this->salary_proj();
	}
};