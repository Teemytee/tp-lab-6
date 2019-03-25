#pragma once
#include  "interfaces.h"
#include <iostream>
#include <string> 

using namespace std;

class Employee
{
protected:
	unsigned int id;
	string fio;
	unsigned int worktime=0;
	double payment=0;
public:
	Employee() {};
	Employee(unsigned int id,string fio,unsigned int worktime)
	{
		this->id = id;
		this->fio = fio;
		this->worktime = worktime;
	}
	virtual void calcSalary()=0;
	void printBio()
	{
		cout << id << ": " << fio << " worked: " << worktime << " hours, salary: " << payment << " $" << endl;
	}
	string getInfo()
	{
		return to_string(id) + ": " + fio + " worked: " +to_string(worktime) + " hours, salary: " + to_string(payment) + " $ \n";
	}
};


