#pragma once
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

class Employee {
protected:
	int id;
	string name;
	float payment = 0;
public:
	Employee(int id, string name) {
		this->id = id;
		this->name = name;
	}
	virtual void calculate_payment() = 0;
	
	int get_id() {
		return this->id;
	}
	string get_name() {
		return this->name;
	}
	float get_payment() {
		return this->payment;
	}
};