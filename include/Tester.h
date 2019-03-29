#pragma once
#include "Engineer.h"

class Tester :public Engineer {
public:
	Tester(int id, string name, int base, int worktime, float contribution, int budget) :Engineer(id, name, base, worktime, contribution, budget) {}
};