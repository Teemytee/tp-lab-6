#pragma once
#include "Employee.h"

class Personal : public Employee, protected virtual WorkTime
{
private:
	double base;
public:
	Personal(unsigned int id, string fio, unsigned int worktime, double base) :
		Employee( id, fio, worktime)
	{
		this->base = base;
	}
	double pay_per_hour()
	{
		return this->worktime * this->base;
	}
	void calcSalary()
	{
		this->payment += pay_per_hour();
	}
	void printBio()
	{
		Employee::printBio();
	}
};

static  double drive_bonus = 1.3;
static double clean_bonus = 1.1;

class Driver : public Personal
{
public:
	Driver( unsigned int id, string fio, unsigned int worktime, double base) :
		Personal( id, fio, worktime, base*drive_bonus) {};
	~Driver() {};
};

class Cleaner : public Personal
{
public:
	Cleaner(unsigned int id, string fio, unsigned int worktime, double base) :
		Personal(id, fio, worktime, base *clean_bonus)
	{};
	~Cleaner() {};
};