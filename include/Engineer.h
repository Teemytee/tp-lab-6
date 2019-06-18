#pragma once
#include "Employee.h"
#include "WorkTime.h"
#include "Project.h" 
class Engineer : public Employee, public WorkTime, public Project 
{
protected:
	int base;		
	double deposit;	
	string project;	
	int budget;		

public:
	Engineer() : Employee() {}; 
	int WorkTimePaymentMethod(int work_time, int base) override 
	{ 
		int payment = work_time * base;
		return payment;
	}


	int ProjectPaymentMethod(int budget, double deposit) override 
	{
		int bonus = budget * deposit;
		return bonus;
	}

	void setBase(int base) 
	{
		this->base = base;
	}

	int getBase() const 
	{
		return base;
	}

	void setDeposit(double depos) 
	{
		this->deposit = depos;
	}

	double getDeposit() 
	{
		return deposit;
	}

	void setProject(string project_name) 
	{
		this->project = project_name;
	}

	string getProject()
	{
		return project;
	}

	~Engineer() {}
};