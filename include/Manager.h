#pragma once

#include "Employee.h"
#include "Project.h"

class Manager : public Employee, public Project {
protected:
	float part = 0.2;
	string project;
	int budget;
	int inferior;
public:
	Manager() : Employee() {}

};