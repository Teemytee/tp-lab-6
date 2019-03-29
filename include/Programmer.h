#pragma once
#include "Engineer.h"
#include <string>
using namespace std;
class Programmer :public Engineer {
public:
	Programmer() : Engineer() {};
	Programmer(string name1, int id1, int base1, int hours, double par1, int budget1, string project1, string position1) {
		this->name = name1;
		this->id = id1;
		this->project = project1;
		this->worktime = hours;
		this->base = base1;
		this->budget = budget1;
		this->part = par1;
		this->position = position1;
		setPayment(par1, budget1, base, hours);
	}


};