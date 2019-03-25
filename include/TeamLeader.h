#pragma once
#include "Programmer.h"
#include "Heading.h"
class TeamLeader : public Programmer, public Heading
{
protected:
	int tributary;
public:
	TeamLeader() : Programmer() { this->tributary = 0; };
	TeamLeader(int id, string name, int worktime, int base, string project, int budget, double contribution, int tributary)
	{
		this->id = id;
		this->name = name;
		this->base = base;
		this->project = project;
		this->tributary = tributary;
		this->worktime = worktime;
		//this->payment = payment;
		this->budget = budget;
		this->contribution = contribution;
		SetPayment();
	}
	int HeadingPayment(int tributary) override
	{
		int pay = tributary * 100;
		return pay;
	}

	void SetPayment() {
		this->payment = (CalculateWorkTime(this->worktime, this->base) +
			ProjectPayment(budget, contribution) +
			HeadingPayment(tributary));
	}

	~TeamLeader() {}
};