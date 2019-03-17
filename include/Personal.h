#pragma once
#include "Employee.h"
#include "WorkTime.h"
class Personal : public Employee, public WorkTime
{
protected:
	int base;
public:
	Personal() {}
	void SetBase(int base) {
		this->base = base;
	}
	int GetBase() const {
		return base;
	}
	~Personal() {}
};

