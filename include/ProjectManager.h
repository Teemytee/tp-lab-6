#pragma once 
#include "Manager.h"
#include "Heading.h"

class ProjectManager :public Manager, public Heading {
protected:
	int subordinates;
public:
	ProjectManager(int id, string name, float contribution, int budget, int subordinates): Manager(id, name, contribution, budget){
		this->subordinates = subordinates;
	}
	float salary_head()override
	{
		return this->budget * log(this->subordinates * 1000) / 100;
	}
	void calculate_payment()override {
		this->payment += this->salary_proj() + this->salary_head();
	}
};