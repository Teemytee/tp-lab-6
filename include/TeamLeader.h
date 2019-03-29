#pragma once
#include "Programmer.h"
#include "Heading.h"

class TeamLeader :public Programmer, public Heading {
protected:
	int subordinates;
public:
	TeamLeader(int id, string name, int base, int worktime, float contribution, int budget, int subordinates) :Programmer(id, name, base, worktime, contribution, budget) {
		this->subordinates = subordinates;
	}
	float salary_head()override 
	{
		return this->budget + log(this->subordinates * 700) / 100;
	}
	void calculate_payment()override
	{
		this->payment += this->salary_time() + this->salary_proj();
	}
};