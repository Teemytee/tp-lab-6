#pragma once
#include "Personal.h"
class Driver : public Personal
{
public:
	Driver(int id, string name, int worktime, int base)
	{
		this->id = id;
		this->name = name;
		this->base = base;
		this->worktime = worktime;
		SetPayment();
	}
	int CalculateWorkTime(int worktime, int base) override
	{
		this->payment = worktime * base;
		return payment;
	}
	
	void SetPayment() override {
		this->payment = CalculateWorkTime(this->worktime, this->base);
	}
	~Driver() {
	}
};

