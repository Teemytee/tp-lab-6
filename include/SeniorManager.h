#pragma once

#include <string>
#include "ProjectManager.h"

class SeniorManager: public ProjectManager {
public:
	SeniorManager(int id, string name, string position,string project, int budget, int inferior):ProjectManager(id,name,position,project,budget,inferior) {
		this->id = id;
		this->name = name;
		this->position = position;
		this->project = project;
		setproject(project);
		this->budget = budget;
		payment = getPsalary(budget, part) + getHsalary(inferior);

	}
};
