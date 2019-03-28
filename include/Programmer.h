#pragma once


#include<string>
#include "Engineer.h"

class Programmer : public Engineer {
public:
	Programmer(int id, string name, string position, int worktime, string project, int budget, float part) {

		this->id = id;
		this->name = name;
		this->worktime = worktime;
		this->part = part;
		this->position = position;
		this->project = project;
		this->budget = budget;
		SetPayment();
	}

	float getPsalary(int budget, float part) {
		float Psalary = part * budget;
		return Psalary;
	}

	int getWTsalary(int base, int worktime) {
		int WTsalary = base * worktime;
		return WTsalary;
	}

	void SetPayment() {
		this->payment = getWTsalary(worktime, base)+ getPsalary(budget,part);
	}
};

