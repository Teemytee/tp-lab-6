#pragma once
#include "Employee.h"
#include "Project.h"
class Manager : public Employee, public Project 
{
protected:
	double deposit;
	int budget;
	string project;

public:
	Manager()  
	{
		this->deposit = 0;
		this->budget = 0;
		this->project = "";
	}

	Manager(int id, string name, string proj, int budget, double depos) 
	{
		this->id = id;
		this->name = name;
		this->project = proj;
		this->budget = budget;
		this->deposit = depos;

		this->worktime = 0;
		calculatePayment();
	}
	void calculatePayment() override 
	{ 
		this->payment = ProjectPaymentMethod(this->budget, this->deposit);
	}
	int ProjectPaymentMethod(int budget, double deposit) override 
	{
		int payment = budget * deposit;
		return payment;
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
	string getProject() { 
		return project;
	}

	~Manager() {}
};