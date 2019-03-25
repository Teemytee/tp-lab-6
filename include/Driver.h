#pragma once
using namespace std;

#include<string>
#include "Personal.h"

class Driver : public Personal {
public:
	Driver(int id, string name,string position, int worktime) {
		this->id = id;
		this->name = name;
		this->position = position;
		this->worktime = worktime;
		payment = getWTsalary(base, worktime)+5000;
		
	}
};
