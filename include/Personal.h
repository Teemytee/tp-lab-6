#pragma once
#include "Employee.h"
#include "WorkTime.h"

class Personal :public Employee, public WorkTime {
protected:
	int base;
	int worktime;
public:
	Personal(int id, string name, int base, int worktime) :Employee(id, name) {
		this->base = base;
		this->worktime = worktime;
	}
	int salary_time() 
	{
		return this->base * this->worktime;
	}
	void calculate_payment()override
	{
		this->payment += this->salary_time();
	}
};