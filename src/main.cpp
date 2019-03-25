#include "Employee.h"
#include "Cleaner.h"
#include "Driver.h"
#include "Tester.h"
#include "Programmer.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
#include <vector>
#include <iostream>
#include<random>
#include<string>
#include<fstream>
using namespace std;
ifstream FileEmployeers("employeers.txt");

int main()
{
	vector<Employee*> employee;
	if (!FileEmployeers.is_open())
	{
		FileEmployeers.open("employeers.txt");
		return 0;
	}
	else
	{
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
				employee.push_back(new Cleaner(id, name + " " + surname, worktime, base));
			}
			if (position == "Driver") {
				int worktime;
				FileEmployeers >> worktime;
				int base;
				FileEmployeers >> base;
				employee.push_back(new Driver(id, name + " " + surname, worktime, base));
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
				employee.push_back(new Tester(id, name + " " + surname, worktime, base, project, budget, contribution));
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
				employee.push_back(new Programmer(id, name + " " + surname, worktime, base, project, budget, contribution));
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
				employee.push_back(new TeamLeader(id, name + " " + surname, worktime, base, project, budget, contribution, tributary));
			}
			if (position == "Manager") {
				string project;
				FileEmployeers >> project;
				int budget;
				FileEmployeers >> budget;
				double contribution;
				FileEmployeers >> contribution;
				employee.push_back(new Manager(id, name + " " + surname, project, budget, contribution));
			}
			if (position == "ProjectManager") {
				string project;
				FileEmployeers >> project;
				int budget;
				FileEmployeers >> budget;
				double contribution;
				FileEmployeers >> contribution;
				int tributary;
				FileEmployeers >> tributary;
				employee.push_back(new ProjectManager(id, name + " " + surname, project, budget, contribution, tributary));
			}
			if (position == "SeniorManager") {
				int numprojects;
				FileEmployeers >> numprojects;
				double contribution;
				FileEmployeers >> contribution;
				int tributary;
				FileEmployeers >> tributary;
				employee.push_back(new SeniorManager(id, name + " " + surname, numprojects, contribution, tributary));
			}
		}
		for (int i = 0; i < employee.size(); ++i) 
		{
			employee[i]->SetPayment();
			cout << employee[i]->GetId() << "\t" << employee[i]->GetFio() << "\t" << employee[i]->GetPayment() << "\t" << employee[i]->GetWorkTime() << "\n";
		}
	}
	system("pause");
return 0;
}
