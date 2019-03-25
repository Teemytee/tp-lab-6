#pragma once
using namespace std;

#include<string>
#include "Personal.h"

class Cleaner: public Personal {
public:
	Cleaner(int id, string name,string position, int worktime) {
		this->id = id;
		this->name = name;
		this->worktime = worktime;
		this->position = position;
		payment = getWTsalary(base, worktime);
		
	}
};