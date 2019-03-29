#pragma once
#include "Personal.h"
using namespace std;
#include <string>
class Cleaner :public Personal
{
public:
	Cleaner(string name1, int id1, int base1, int hours, string position1) {
		this->id = id1;
		this->name = name1;
		this->base = base1;
		this->worktime = hours;
		this->position = position1;
		setPayment(base1, hours);
	}
};