#pragma once

#include <string>
#include "ProjectManager.h"

class SeniorManager: public ProjectManager {

protected:
	int inferior;

public:
	SeniorManager(int id, string name, string position,string project, int budget, int inferior):ProjectManager(id,name,position,project,budget,inferior) {
		this->id = id;
		this->name = name;
		this->position = position;
		this->project = project;

		this->budget = budget;
		this->inferior = inferior;
		SetPayment();
	}

	float getPsalary(int budget, float part) {
		float Psalary = part * budget;
		return Psalary;
	}

	float getHsalary(int inferior) {
		float Hsalary = inferior * 5000;
		return Hsalary;
	}

	void SetPayment() {
		this->payment = getHsalary(inferior) + getPsalary(budget, part);
	}
};


