#pragma once

#include <string>
#include "Manager.h"
#include "Heading.h"

class ProjectManager : public Manager, public Heading{
public:
	ProjectManager(int id, string name,string position, string project, int budget,int inferior) {
		this->id = id;
		this->name = name;
		this->position = position;
		this->project = project;
		setproject(project);
		this->budget = budget;
		payment = getPsalary(budget, part)+ getHsalary(inferior);
		
	}
};