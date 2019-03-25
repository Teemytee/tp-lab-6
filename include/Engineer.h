#pragma once
#include "Employee.h"
#include "WorkTime.h"
#include "Project.h"
class Engineer :public Employee, public WorkTime, public Project
{
protected:
	int base;
	double contribution;
	string project;
	int budget;
public:
	Engineer() : Employee() {};
	int ProjectPayment(int budget, double contribution) override
	{
		int bonus = budget * contribution;
		return bonus;
	}
	int CalculateWorkTime(int worktime, int base) override
	{
		int payment = worktime * base;
		return payment;
	}

	void SetBase(int base) {
		this->base = base;
	}

	int GetBase() const {
		return base;
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

	~Engineer() {}
};

