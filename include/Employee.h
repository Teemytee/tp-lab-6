#pragma once
#include <string>

using namespace std;
class Employee
{
protected:

	int id;
	string name;
	int worktime;
	int payment;

public:

	Employee() {}

	Employee(int id, string name, int worktime, int payment) 
	{
		this->id = id;
		this->name = name;
		this->worktime = worktime;
	}
	virtual void calculatePayment() = 0;

	void setID(int id) 
	{
		this->id = id;
	}

	int getID() const
	{ 
		return id;
	}

	void setFIO(string name)
	{ 
		this->name = name;
	}

	string getFIO() const 
	{ 
		return name;
	}

	void setWorkTime(int worktime) 
	{
		this->worktime = worktime;
	}

	int getWorkTime() const 
	{ 
		return worktime;
	}

	int getPaymentTime() const 
	{
		return payment;
	}

	~Employee() {}
};