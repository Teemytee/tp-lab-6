#include "Cleaner.h"
#include "Driver.h"
#include"Heading.h"
#include"Employee.h"
#include"Engineer.h"
#include"Manager.h"
#include"Personal.h"
#include"Programmer.h"
#include"Project.h"
#include"ProjectManager.h"
#include"SeniorManager.h"
#include"TeamLeader.h"
#include"Tester.h"
#include"WorkTime.h"
#include <string>
#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
using namespace std;
int main() {
	vector<Employee*> employee;
	ifstream FileEmployeers("qwe.txt");

	int id;
	while (FileEmployeers >> id)
	{
		string name, surname;
		FileEmployeers >> name >> surname;
		string position;
		FileEmployeers >> position;


		if (position == "Cleaner") {
			int worktime;
			FileEmployeers >> worktime;
			int base;
			FileEmployeers >> base;
			employee.push_back(new Cleaner(name + " " + surname, id, base, worktime, position));
		}
		if (position == "Driver") {
			int worktime;
			FileEmployeers >> worktime;
			int base;
			FileEmployeers >> base;
			employee.push_back(new Driver(name + " " + surname, id, base, worktime, position));
		}
		if (position == "Tester") {
			int worktime;
			FileEmployeers >> worktime;
			int base;
			FileEmployeers >> base;
			string project;
			FileEmployeers >> project;
			int budget;
			FileEmployeers >> budget;
			double contribution;
			FileEmployeers >> contribution;
			employee.push_back(new Tester(name + " " + surname, id, base, worktime, contribution, budget, project, position));
		}
		if (position == "Programmer") {
			int worktime;
			FileEmployeers >> worktime;
			int base;
			FileEmployeers >> base;
			string project;
			FileEmployeers >> project;
			int budget;
			FileEmployeers >> budget;
			double contribution;
			FileEmployeers >> contribution;
			employee.push_back(new Programmer(name + " " + surname, id, base, worktime, contribution, budget, project, position));
		}
		if (position == "TeamLeader") {
			int worktime;
			FileEmployeers >> worktime;
			int base;
			FileEmployeers >> base;
			string project;
			FileEmployeers >> project;
			int budget;
			FileEmployeers >> budget;
			double contribution;
			FileEmployeers >> contribution;
			int tributary;
			FileEmployeers >> tributary;
			employee.push_back(new TeamLeader(name + " " + surname, id, base, worktime, contribution, budget, tributary, project, position));
		}
		if (position == "Manager") {
			int worktime;
			FileEmployeers >> worktime;
			string project;
			FileEmployeers >> project;
			int budget;
			FileEmployeers >> budget;
			double contribution;
			FileEmployeers >> contribution;
			employee.push_back(new Manager(name + " " + surname, id, worktime, contribution, budget, project, position));
		}
		if (position == "ProjectManager") {
			int worktime;
			FileEmployeers >> worktime;
			string project;
			FileEmployeers >> project;
			int budget;
			FileEmployeers >> budget;
			double contribution;
			FileEmployeers >> contribution;
			int tributary;
			FileEmployeers >> tributary;
			employee.push_back(new ProjectManager(name + " " + surname, id, worktime, contribution, budget, tributary, project, position));
		}
		if (position == "SeniorManager") {
			int worktime;
			FileEmployeers >> worktime;
			string project;
			FileEmployeers >> project;
			int budget;
			FileEmployeers >> budget;
			double contribution;
			FileEmployeers >> contribution;
			int tributary;
			FileEmployeers >> tributary;
			employee.push_back(new SeniorManager(name + " " + surname, id, worktime, contribution, budget, tributary, project, position));
		}
	}
	for (int i = 0; i < employee.size(); ++i)
	{

		cout << employee[i]->GetId() << "\t" << employee[i]->GetFio() << "\t" << employee[i]->GetPosition() << "\t" << employee[i]->GetPayment() << "\t" << employee[i]->GetWorktime() << "\n";
	}


	system("pause");
	return 0;
}