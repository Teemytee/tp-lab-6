#pragma once
#include "Employee.h"
using namespace std;
#include <string>

#include "WorkTime.h"
#include "Project.h"
class Engineer : public Employee, public WorkTime, public Project{
protected:
	int base;
	double part;
	string project;
	int budget;
public:
	Engineer() :Employee() {};
	int calcWorkTime(int base, int hours) override {
		return hours*base;
	}
	double calcProjPayment(double par,int bud) override {
		return(par*bud);
	}
	void setPayment(double par,int bud,int base,int hours) {
		this->payment = calcProjPayment(par, bud) + calcWorkTime(base, hours);
	}

};