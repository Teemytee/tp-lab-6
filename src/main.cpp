#include "Employee.h"
#include "Personal.h"
#include "Engineer.h"
#include "Manager.h"
#include "TeamLeader.h"
#include <fstream>
#include <vector>

int main()
{
/*
	vector<Employee*> employee;
	ifstream file("employ.txt");
	if (!file)
	{
		cout << "Error in opening file for reading !" << endl;
		system("pause");
		return 0;

	}
	int id;
	while (file >> id)
	{
		string name, surname;
		file >> name >> surname;
		string position;
		file >> position;
		if (position == "Cleaner") {
			unsigned  worktime;
			file >> worktime;
			double base;
			file >> base;
			employee.push_back(new Cleaner(id, name + " " + surname, worktime, base));
		}
		if (position == "Driver") {
			int worktime;
			file >> worktime;
			double base;
			file >> base;
			employee.push_back(new Driver(id, name + " " + surname, worktime, base));
		}
		if (position == "Tester") {
			unsigned  worktime;
			file >> worktime;
			double base;
			file >> base;
			string project_name;
			file >> project_name;
			employee.push_back(new Tester(id, name + " " + surname, worktime, base, whichproject(project_name)));
		}
		if (position == "Programmer") {
			unsigned int worktime;
			file >> worktime;
			double base;
			file >> base;
			string project_name;
			file >> project_name;
			employee.push_back(new Programmer(id, name + " " + surname, worktime, base,  whichproject(project_name)));
		}
		if (position == "TeamLeader") {
			int worktime;
			file >> worktime;
			int base;
			file >> base;
			string project_name;
			file >> project_name;
			int n_stuff;
			file >> n_stuff;
			employee.push_back(new TeamLeader(id, name + " " + surname, worktime, base, whichproject(project_name),n_stuff));
		}
		if (position == "Manager") {
			string project_name;
			file >> project_name;
			float contribution;
			file >> contribution;
			employee.push_back(new Manager(id, name + " " + surname, whichproject(project_name),contribution));
		}
		if (position == "ProjectManager") {
			string project_name;
			file >> project_name;
			int budget;
			file >> budget;
			double contribution;
			file >> contribution;
			unsigned int n_stuff;
			file >> n_stuff;
			employee.push_back(new ProjectManager(id, name + " " + surname, whichproject(project_name), contribution,n_stuff));
		}
		if (position == "SeniorManager") {
			string project_name;
			file >> project_name;
			int budget;
			file >> budget;
			double contribution;
			file >> contribution;
			unsigned int n_stuff;
			file >> n_stuff;
			employee.push_back(new SeniorManager(id, name + " " + surname, whichproject(project_name), contribution, n_stuff));
		}
	}
		for (auto i = 0; i < employee.size(); ++i)
		{
			employee[i]->calcSalary();
			employee[i]->printBio();
			
		}
		system("pause");
		return 0;
*/
}

