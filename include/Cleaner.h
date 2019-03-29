#pragma once
#include "Personal.h"

class Cleaner :public Personal {
public:
	Cleaner(int id, string name, int base, int worktime) :Personal(id, name, base, worktime){}
};