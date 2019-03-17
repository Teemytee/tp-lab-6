#pragma once
#include "Engineer.h"
class Programmer : public Engineer
{
public:
	Programmer() : Engineer() {};
	Programmer(int id, string name, int worktime, int base, string project, int budget, double contribution) {
		this->id = id;
		this->name = name;
		this->base = base;
		this->project = project;
		this->worktime = worktime;
		this->budget = budget;
		//this->payment = payment;
		this->contribution = contribution;
		SetPayment();
	}

	void SetPayment() override 
	{ 
		this->payment = (CalculateWorkTime(this->worktime, this->base) + ProjectPayment(budget, contribution));
	}

	~Programmer() {}
};

