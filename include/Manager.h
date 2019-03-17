#pragma once
#include "Employee.h"
#include "Project.h"
class Manager : public Employee, public Project
{
protected:
	double contribution;
	int budget;
	string project;
public:
	Manager() { this->contribution = 0; this->budget = 0; this->project = ""; }
	Manager(int id, string name, string project, int budget, double contribution) {
		this->id = id;
		this->name = name;
		this->project = project;
		this->budget = budget;
		this->worktime = 0;
		//this->payment = payment;
		this->contribution = contribution;
		SetPayment();
	}
	void SetPayment() override
	{
		this->payment = ProjectPayment(this->budget, this->contribution);
	}
	int ProjectPayment(int budget, double contribution) override 
	{
		int pay = budget * contribution;
		return pay;
	}
	
	void SetContribution(double contribution) {
		this->contribution = contribution;
	}

	double GetContriution() {
		return contribution;
	}

	void SetProject(string project) {
		this->project = project;
	}

	string GetProject() {
		return project;
	}
	~Manager() {}
};


