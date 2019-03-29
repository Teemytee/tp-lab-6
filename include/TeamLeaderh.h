#pragma once
#include <string>
#include "Programmer.h"
#include "Heading.h"

class TeamLeader : public Programmer, public Heading {
protected:
	int inferior;
public:
	TeamLeader(int id, string name, string position,int worktime, string project, int budget,int part, int inferior):Programmer(id,name,position,worktime,project,budget,part) {
		this->id = id;
		this->name = name;
		this->position = position;
		this->project = project;
		this->part = part;
		this->inferior = inferior;
		this->worktime = worktime;

		this->budget = budget;
		this->inferior = inferior;
		SetPayment();

	}

	int getWTsalary(int base, int worktime) {
		int WTsalary = base * worktime;
		return WTsalary;
	}

	float getPsalary(int budget, float part) {
		float Psalary = part * budget;
		return Psalary;
	}

	float getHsalary(int inferior) {
		float Hsalary = inferior * 5000;
		return Hsalary;
	}

	void SetPayment() {
		this->payment = getHsalary(inferior) + getPsalary(budget, part)+ getWTsalary(base, worktime);
	}

};

