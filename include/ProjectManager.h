#include "Manager.h"
#include "Heading.h"
#include <string>
using namespace std;
class ProjectManager :public Manager, public Heading {
public:
	ProjectManager() {};
	ProjectManager(string name1, int id1, int hours, double par1, int budget1, int privates1, string project1, string position1) {
		this->name = name1;
		this->id = id1;
		this->project = project1;
		this->worktime = hours;
		this->part = par1;
		this->budget = budget1;
		this->privates = privates1;
		this->position = position1;
		setPayment(worktime, budget, privates);
	}
	int calcHeading(int privates) {
		return (privates * 5000);
	}
	void setPayment(double par1, int budget1, int privates1) {
		this->payment = calcProjPayment(par1, budget1) + calcHeading(privates1);
	};

};