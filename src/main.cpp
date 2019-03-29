#include <iostream>
#include <math.h>
#include <vector>
#include <fstream>
#include <string>
#include "Employee.h"
#include "Cleaner.h"
#include "Driver.h"
#include "Tester.h"
#include "Programmer.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
using namespace std;

int main()
{
	vector <Employee*> empls;
	int id, base, worktime, budget, subordinates;
	string first_name, name, last_name, position;
	float contribution;
	ifstream file("../data/empls.txt");
	if (!file.is_open())
		return 0;
	else {
		while (file >> id) {
			file >> first_name >> last_name;
			file >> position;
			if (position == "Cleaner") {
				file >> base >> worktime;
				cout << id<<' '<< first_name + ' ' + last_name<<' '<< base<< ' '<< worktime<< endl;
				empls.push_back(new Cleaner(id, first_name + ' ' + last_name, base, worktime));
			}
			else
				if(position=="Driver") {
					file >> base >> worktime;
					cout << id << ' ' << first_name + ' ' + last_name << ' ' << base << ' ' << worktime << endl;
					empls.push_back(new Driver(id, first_name + ' ' + last_name, base, worktime));
				}
				else
					if (position == "Programmer") {
							file >> base >> worktime >> contribution >> budget;
							cout <<  id << ' ' << first_name + ' ' + last_name << ' ' << base << ' ' << worktime << ' '<<contribution<<' '<<budget<< endl;
							empls.push_back(new Programmer(id, first_name + ' ' + last_name, base, worktime, contribution, budget));
					}
					else
						if(position=="Tester") {
							file >> base >> worktime >> contribution >> budget;
							cout << id << ' ' << first_name + ' ' + last_name << ' ' << base << ' ' << worktime << ' ' << contribution << ' ' << budget << endl;
							empls.push_back(new Tester(id, first_name + ' ' + last_name, base, worktime, contribution, budget));
						}
						else
							if (position == "TeamLeader") {
								file >> base >> worktime >> contribution >> budget >> subordinates;
								cout << id << ' ' << first_name + ' ' + last_name << ' ' << base << ' ' << worktime << ' ' << contribution << ' ' << budget <<' '<<subordinates<< endl;
								empls.push_back(new TeamLeader(id, first_name + ' ' + last_name, base, worktime, contribution, budget, subordinates));
							}
							else
								if (position == "Manager") {
									file >> contribution >> budget;
									cout << id << ' ' << first_name + ' ' + last_name << ' ' <<  contribution << ' ' << budget << endl;
									empls.push_back(new Manager(id, first_name + ' ' + last_name, contribution, budget));
								}
								else
									if (position == "ProjectManager") {
										file >>contribution >> budget >> subordinates;
										cout << id << ' ' << first_name + ' ' + last_name << ' ' << contribution << ' ' << budget << ' '<<subordinates<< endl;
										empls.push_back(new ProjectManager(id, first_name + ' ' + last_name, contribution, budget, subordinates));
									}
									else
										if (position == "SeniorManager") {
											file >> contribution >> budget >> subordinates;
											cout << id << ' ' << first_name + ' ' + last_name << ' ' << contribution << ' ' << budget << ' ' << subordinates << endl;
											empls.push_back(new SeniorManager(id, first_name + ' ' + last_name, contribution, budget, subordinates));
										}
			
		}
		for (int i = 0; i < empls.size(); ++i)
		{
			empls[i]->calculate_payment();
			cout << empls[i]->get_id() << ' ' << empls[i]->get_name() << ' ' << empls[i]->get_payment() << endl;
		}
	}	
	system("pause");
    return 0;
}
