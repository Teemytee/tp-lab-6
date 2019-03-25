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
		payment = getWTsalary(base, worktime)+getPsalary(budget,part);
		
		setproject(project);
	}
};