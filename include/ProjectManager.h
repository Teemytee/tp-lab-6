#pragma once

#include <string>
#include "Manager.h"
#include "Heading.h"

class ProjectManager : public Manager, public Heading{
protected:
	int inferior;
public:
	ProjectManager(int id, string name,string position, string project, int budget,int inferior) {
		this->id = id;
		this->name = name;
		this->position = position;
		this->project = project;
		this->budget = budget;
		this->inferior = inferior;
		SetPayment();
		
	}

	float getHsalary(int inferior) {
		float Hsalary = inferior * 5000;
		return Hsalary;
	}

	float getPsalary(int budget, float part) {
		float Psalary = part * budget;
		return Psalary;
	}

	void SetPayment() {
		this->payment = getHsalary(inferior) + getPsalary(budget, part);
	}
};
