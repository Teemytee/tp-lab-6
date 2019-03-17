#pragma once

#include"ProjectManager.h"
class SeniorManager : public ProjectManager
{
private:
	int numprojects;
public:
	SeniorManager() : ProjectManager() { this->numprojects = 0; };

	SeniorManager(int id, string name, int numprojects, double contribution, int tributary)
	{
		this->id = id;
		this->name = name;
		this->numprojects = numprojects;
		this->tributary = tributary;
		this->worktime = 0;
		this->contribution = contribution;
		SetPayment();
	}
	int ProjectPayment(int allbudget, double contribution) override
	{
		int payment = allbudget * this->contribution * this->numprojects;
		return payment;
	}
	void SetPayment() override
	{
		this->payment = (ProjectPayment(1000, this->contribution) + HeadingPayment(this->tributary));
	}
	~SeniorManager() {}
};
