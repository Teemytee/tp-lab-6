#include "Employee.h"
using namespace std;
#include "Project.h"
#include<string>
class Manager :public Employee, public Project {
protected:
	int privates;
	double part;
	string project;
	int budget;
public:
	Manager() {};
	Manager(string name1, int id1, int hours, double par1, int budget1, string project1, string position1) {
		this->name = name1;
		this->id = id1;
		this->project = project1;
		this->worktime = hours;
		this->part = par1;
		this->budget = budget1;
		this->position = position1;
		setPayment(worktime, budget, privates);
	};
	double calcProjPayment(double par1, int budget1) override {
		return(par1*budget1);
	}
	void setPayment(double par1, int budget1, int privates1) {
		this->payment = calcProjPayment(par1, budget1);
	};
};