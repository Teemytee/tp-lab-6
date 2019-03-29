#pragma once
#include"ProjectManager.h"
#include <string>
using namespace std;
class SeniorManager :public ProjectManager {
public:

	SeniorManager(string name1, int id1, int hours, double par1, int budget1, int privates1, string project1, string position1) {
		this->name = name1;
		this->id = id1;
		this->project = project1;
		this->worktime = hours;
		this->part = par1;
		this->budget = budget1;
		this->position = position1;
		this->privates = privates1;
		setPayment(worktime, budget, privates);
	};
};