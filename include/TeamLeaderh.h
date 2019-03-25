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
		setproject(project);
		this->budget = budget;
		payment = getPsalary(budget, part) + getHsalary(inferior)+getWTsalary(base,worktime);

	}
};