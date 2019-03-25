#include <iostream>
using namespace std;

#include "Employee.h"
#include "Cleaner.h"
#include "Driver.h"
#include "Programmer.h"
#include "Tester.h"
#include "ProjectManager.h"
#include "TeamLeaderh.h"
#include "SeniorManager.h"
#include <vector>
#include<fstream>

int main()
{
	setlocale(LC_ALL, "Russian");
	ifstream EmployeeList("EmployeeList.txt");

	vector <Employee*> employee;
	int id;
	string f,i,o;
	string position;
	int worktime;
	string project;
	float part;
	int budget;
	int inferior;

	if (EmployeeList.is_open()) {
		while (!EmployeeList.eof()) {
			EmployeeList >> id;
			EmployeeList >> f;
			EmployeeList >> i; EmployeeList >> o;
			EmployeeList >> position;


			if (position == "Cleaner") {
				EmployeeList >> worktime;
				employee.push_back(new Cleaner(id, f + " " + i + " " + o,position, worktime));
			}

			if (position == "Driver") {
				EmployeeList >> worktime;
				employee.push_back(new Driver(id, f + " " + i + " " + o,position, worktime));
			}
			if (position == "Programmer") {
				EmployeeList >> worktime;
				EmployeeList >> project; EmployeeList >> budget;EmployeeList >> part;
				employee.push_back(new Programmer(id, f + " " + i + " " + o,position, worktime, project,budget,part));
			}
			if (position == "Tester") {
				EmployeeList >> worktime;
				EmployeeList >> project;  EmployeeList >> budget; EmployeeList >> part;
				employee.push_back(new Tester(id, f + " " + i + " " + o,position, worktime,project,budget,part));
			}
			if (position == "ProjectManager") {
				EmployeeList >> project; EmployeeList >> budget; EmployeeList >> inferior;
				employee.push_back(new ProjectManager(id, f + " " + i + " " + o,position, project, budget,inferior));
			}
			if (position == "TeamLeader") {
				EmployeeList >> worktime;
				EmployeeList >> project; EmployeeList >> budget; EmployeeList >> part; EmployeeList >> inferior;
				employee.push_back(new TeamLeader(id, f + " " + i + " " + o,position, worktime, project, budget,part, inferior));
			}
			if (position == "SeniorManager") {
				EmployeeList >> project; EmployeeList >> budget; EmployeeList >> inferior;
				employee.push_back(new SeniorManager(id, f + " " + i + " " + o,position, project, budget,inferior ));
			}
		}
	}

	ofstream file;
	file.open("result.txt");
	if (file.is_open()) {
		file<< "id |         name          |   position     |  project  | worktime |  base  |   payment   \n";
	}
	 
	for (int j = 0; j < employee.size();j++) {
		employee[j]->print();
	}
	
}