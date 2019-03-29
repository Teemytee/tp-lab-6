#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <stdlib.h>
#include "../include/Classes.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	ifstream file("staff.txt");
	string s, word;
	vector<string> wVec;
	vector<Employee *> staff;
	int id, work, proj;
	string fio;
	while (getline(file, s)) {
		istringstream iss(s, istringstream::in);
		while (iss >> word)
		{
			wVec.push_back(word);
		}
		id = atoi(wVec[0].c_str());
		fio = wVec[1] + " " + wVec[2] + " " + wVec[3];
		if (wVec[4] == "cleaner") {
			work = atoi(wVec[5].c_str());
			staff.push_back(new Cleaner(id, fio, work));
		}
		if (wVec[4] == "driver") {
			work = atoi(wVec[5].c_str());
			staff.push_back(new Driver(id, fio, work));
		}		
		if (wVec[4] == "programmer") {
			work = atoi(wVec[5].c_str());
			proj = wVec.size() - 6;
			staff.push_back(new Programmer(id, fio, work, proj));
		}
		if (wVec[4] == "tester") {
			work = atoi(wVec[5].c_str());
			proj = wVec.size() - 6;
			staff.push_back(new Tester(id, fio, work, proj));
		}
		if (wVec[4] == "teamleader") {
			work = atoi(wVec[5].c_str());
			proj = wVec.size() - 6;
			staff.push_back(new TeamLeader(id, fio, work, proj));
		}
		if (wVec[4] == "manager") {
			proj = wVec.size() - 5;
			staff.push_back(new Manager(id, fio, proj));
		}
		if (wVec[4] == "projectmanager") {
			proj = wVec.size() - 5;
			staff.push_back(new ProjectManager(id, fio, proj));
		}
		if (wVec[4] == "seniormanager") {
			proj = wVec.size() - 5;
			staff.push_back(new SeniorManager(id, fio, proj));
		}

		wVec.clear();
	}
	file.close();

	for (int i = 0; i < staff.size(); i++) {
		cout << staff[i]->getName() << " | часы = " << staff[i]->getWorktime() << " | кол-во проектов = " << staff[i]->getNumproj() << " | зарплата = " << staff[i]->getSal() << endl;
	}

	system("pause");

	return 0;
}