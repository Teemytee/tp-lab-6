#include <string>
#include "Programmer.h"
#include "Heading.h"
using namespace std;
class TeamLeader : public Programmer, public Heading {
private:
	int privates;
public:
	TeamLeader() :Programmer() {};
	TeamLeader(string name1, int id1, int base1, int hours, double par1, int budget1, int privates1, string project1, string position1) {
		this->name = name1;
		this->id = id1;
		this->project = project1;
		this->worktime = hours;
		this->base = base1;
		this->budget = budget1;
		this->part = par1;
		this->privates = privates1;
		this->position = position1;
		setPayment(par1, budget1, base, hours, privates1);
	}
	int calcHeading(int privates) {
		return (privates * 5000);
	}
	void setPayment(double par1, int budget1, int base, int hours, int privates1) {
		this->payment = calcWorkTime(base, hours) + calcProjPayment(par1, budget1) + calcHeading(privates1);
	};
};