#pragma once
using namespace std;
#include<string>
#include<fstream>

class Employee {
protected:
	int id;
	string name;
	int worktime;
	int payment;
	string position;

	int print_base;
	string name_project;
public:
	Employee() {
		
	}
	
	void setbase(int base) {
		print_base = base;
	}
	void setproject(string project) {
		name_project = project;
	}
	
	void print() {
		ofstream file;
		file.open("result.txt",std::ios_base::in | std::ios_base::app);

		if (file.is_open())
		{
			//file << "id |         name          |   position     |  project  | worktime |  base  |   payment   \n";

			if (worktime < 0) {//no worktime and base
				file << "---------------------------------------------------------------------------------------\n";

				file << id << " | " << name << " | " << position << " | " << name_project << " |   -   |   -   | " << payment << "\n";
			}
			else {
				file << "---------------------------------------------------------------------------------------\n";
				file << id << " | " << name << " | " << position << " | " << name_project << " | " << worktime << " | " << print_base << " | " << payment << "\n";
			}
		}
		file.close();
	}
};