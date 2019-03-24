#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
#include "MyProject.h"
#include "IWorkTime.h"
#include "IProject.h"
#include "IHeading.h"
#include "Employee.h"
#include "Personal.h"
#include "Manager.h"
#include "Engineer.h"
vector<Employee*>& ReadandPrint(ifstream& in, ofstream&out)
{
	vector<Employee*>*employees = new vector<Employee*>;
	string project, _budjet, position, name, _worktime, _id;
	int budjet, worktime, id;
	getline(in, project, ';');
	getline(in, _budjet, ';');
	budjet = atoi(_budjet.c_str());
	MyProject myproject = { budjet,"project" };
	while (!in.eof())
	{
		getline(in, _id, ';');
		getline(in, name, ';');
		getline(in, position, ';');
		getline(in, _worktime, ';');
		worktime = atoi(_worktime.c_str());
		id = atoi(_id.c_str());
		if (position == "programmer") employees->push_back(new Programmer(id, name, positions::programmer, worktime, 100, &myproject, 0.1));
		if (position == "tester") employees->push_back(new Programmer(id, name, positions::tester, worktime, 80, &myproject, 0.1));
		if (position == "projectManager") employees->push_back(new ProjectManager(id, name, positions::projectManager, worktime, &myproject, 0.1, 11));
		if (position == "seniorManager") employees->push_back(new SeniorManager(id, name, positions::seniorManager, worktime, &myproject, 0.1, 12));
		if (position == "teamLeader")employees->push_back(new TeamLeader(id, name, positions::teamLeader, worktime, 120, &myproject, 0.1, 7));
		if (position == "driver")employees->push_back(new Driver(id, name, positions::driver, worktime, 50));
		if (position == "cleaner")employees->push_back(new Cleaner(id, name, positions::cleaner, worktime, 60));
		position = "";

	}
	for (unsigned int i = 0; i<(employees->size()); i++)
	{
		(*employees)[i]->CalcPayment();
		(*employees)[i]->PrintBio();
		(*employees)[i]->PrintBio(out);
	}
	return *employees;
}
