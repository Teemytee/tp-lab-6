#pragma once
#include "Personal.h"

class Driver :public Personal {
public:
	Driver(int id, string name, int base, int worktime) :Personal(id, name, base, worktime) {}
};