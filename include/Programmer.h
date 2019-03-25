#pragma once


#include<string>
#include "Engineer.h"

class Programmer : public Engineer {
public:
	Programmer(int id, string name, string position,int worktime, string project,int budget,float part) {
		
		this->id = id;
		this->name = name;
		this->worktime = worktime;
		this->part = part;
		this->position = position;
		this->project = project;
		this->budget = budget;
		payment = getWTsalary(base, worktime)+getPsalary(budget,part);
		setproject(project);
	}
};
