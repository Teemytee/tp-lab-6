#pragma once
#include "Manager.h"
#include "Heading.h"
class ProjectManager : public Manager, public Heading
{
protected:
	int tributary;
public:
	ProjectManager() : Manager() { this->tributary = 0;  };
	ProjectManager(int id, string name, string project, int budget, double contribution, int tributary)
	{
		this->id = id;
		this->name = name;
		this->project = project;
		this->tributary = tributary;
		this->budget = budget;
		//this->worktime = worktime;
		this->contribution = contribution;
		this->worktime = 0;
		SetPayment();
	}

	void SetPayment() override
	{
		this->payment = (ProjectPayment(this->budget, this->contribution) + HeadingPayment(this->tributary));
	}
	int HeadingPayment(int tributary) override
	{
		int salary = tributary * 1000;
		return salary;
	}
	~ProjectManager() {}
};