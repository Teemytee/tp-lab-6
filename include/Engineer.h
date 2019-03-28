#pragma once
using namespace std;

#include "Employee.h"
#include "WorkTime.h"
#include "Project.h"

class Engineer : public Employee, public WorkTime, public Project {
protected:
	int base = 800;
	float part;
	string project;
	int budget;
public:

	Engineer() : Employee() {}

};

