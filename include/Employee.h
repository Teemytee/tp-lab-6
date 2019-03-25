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
	virtual void SetPayment() = 0;


	void SetId(int id) {
		this->id = id;
	}

	void SetFio(string name) {
		this->name = name;
	}

	void SetWorkTime(int worktime) {
		this->worktime = worktime;
	}

	int GetId() const {
		return id;
	}

	string GetFio() const {
		return name;
	}

	int GetWorkTime() const {
		return worktime;
	}

	int GetPayment() const {
		return payment;
	}
	~Employee() {}
};
