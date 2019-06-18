#pragma once
#include "Personal.h"

class Cleaner : public Personal 
{
public:
	Cleaner(int id, string name, int worktime, int base)
	{
		this->id = id;
		this->name = name;
		this->base = base;
		this->worktime = worktime;
		calculatePayment();			
	}
	void calculatePayment()
	{
		this->payment = WorkTimePaymentMethod(this->worktime, this->base);
	}
	int WorkTimePaymentMethod(int work_time, int base) override 
	{
		int payment = work_time * base;
		return payment;
	}
	~Cleaner() {}
};