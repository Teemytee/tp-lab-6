#pragma once
using namespace std;

#include "Employee.h"
#include "WorkTime.h"

class Personal : public Employee, public WorkTime {
protected:
	int base=300;
public:
	Personal() : Employee() {
		setbase(base);
	}
};