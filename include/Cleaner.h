#pragma once
using namespace std;

#include<string>
#include "Personal.h"

class Cleaner: public Personal {
public:

	Cleaner(int id, string name, string position, int worktime) {
		this->id = id;
		this->name = name;
		this->position = position;
		this->worktime = worktime;
		SetPayment();
	}

	int getWTsalary(int base, int worktime) override {
		int WTsalary = base * worktime;
		return WTsalary;
	}
	void SetPayment() {
		this->payment = getWTsalary(worktime, base);
	}
};

