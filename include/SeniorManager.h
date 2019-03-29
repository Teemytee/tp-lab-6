#pragma once
#include "ProjectManager.h"

class SeniorManager :public ProjectManager {
public:
	SeniorManager(int id, string name, float contribution, int budget, int subordinates) :ProjectManager(id, name, contribution, budget, subordinates) {}
	float salary_head()override
	{
		return this->budget * log(this->subordinates * 10000) / 100;
	}
	void calculate_payment()override
	{
		this->payment += this->salary_proj() + this->salary_head();
	}
};
