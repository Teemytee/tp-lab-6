#pragma once


#include<string>
#include "Engineer.h"

class Tester : public Engineer {
public:
	Tester(int id, string name, string position,int worktime, string project, int budget,float part) {
		this->id = id;
		this->name = name;
		this->worktime = worktime;
		this->position = position;
		this->part = part;
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
		this->payment = getPsalary(budget, part) + getWTsalary(base, worktime);
	}
};
