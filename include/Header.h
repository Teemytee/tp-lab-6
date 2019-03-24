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
	string project, temp, _budjet, position, name, _worktime, _base, _id, _coefficient, _subordinate;
	int budjet, worktime, id, subordinate;
	double coefficient,base;
	getline(in, project, ';');
	getline(in, _budjet, ';');
	budjet = atoi(_budjet.c_str());
	MyProject myproject = { budjet,"project" };
	getline(in, temp, ';');
	while (!in.eof())
	{
		getline(in, _id, ';');
		getline(in, name, ';');
		getline(in, position, ';');
		getline(in, _worktime, ';');
		worktime = atoi(_worktime.c_str());
		id = atoi(_id.c_str());
		if (position == "programmer")
		{
			getline(in, _base, ';');
			base = atof(_base.c_str());
			getline(in, _coefficient, ';');
			coefficient= atof(_coefficient.c_str());
			employees->push_back(new Programmer(id, name, worktime, base, &myproject, coefficient));
		}
		if (position == "tester")
		{
			getline(in, _base, ';');
			base = atof(_base.c_str());
			getline(in, _coefficient, ';');
			coefficient = atof(_coefficient.c_str());
			employees->push_back(new Tester(id, name, worktime, base, &myproject, coefficient));
		}
		if (position == "projectManager") 
		{
			getline(in, _coefficient, ';');
			coefficient = atof(_coefficient.c_str());
			getline(in, _subordinate, ';');
			subordinate = atoi(_subordinate.c_str());
			employees->push_back(new ProjectManager(id, name, worktime, &myproject, coefficient, subordinate));
		}
		if (position == "seniorManager")
		{ 
			getline(in, _coefficient, ';');
			coefficient = atof(_coefficient.c_str());
			getline(in, _subordinate, ';');
			subordinate = atoi(_subordinate.c_str());
			employees->push_back(new SeniorManager(id, name, worktime, &myproject, coefficient, subordinate));
		}
		if (position == "teamLeader")
		{
			getline(in, _base, ';');
			base = atof(_base.c_str());
			getline(in, _coefficient, ';');
			coefficient = atof(_coefficient.c_str());
			getline(in, _subordinate, ';');
			subordinate = atoi(_subordinate.c_str());
			employees->push_back(new TeamLeader(id, name, worktime, base, &myproject, coefficient, subordinate));
		}
		if (position == "driver") 
		{ 
			getline(in, _base, ';');
			base = atof(_base.c_str());
			employees->push_back(new Driver(id, name, worktime, base));
		}
		if (position == "cleaner") 
		{
			getline(in, _base, ';');
			base = atof(_base.c_str());
			employees->push_back(new Cleaner(id, name, worktime, base)); 
		}
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
