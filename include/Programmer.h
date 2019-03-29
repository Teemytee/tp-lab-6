#pragma once
#include "Engineer.h"

class Programmer :public Engineer {
public:
	Programmer(int id, string name, int base, int worktime, float contribution, int budget) :Engineer(id, name, base, worktime, contribution, budget) {}
};