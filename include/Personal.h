#pragma once
#include "Employee.h"
#include "WorkTime.h"
class Personal : public Employee, public WorkTime 
{
protected:
	int base; 

public:

	Personal() {} 

	void setBase(int base)
	{ 
		this->base = base;
	}

	int getBase() const
	{ 
		return base;
	}

	~Personal() {}
};