#include "Personal.h"
using namespace std;
#include <string>
class Driver :public Personal {
private:


public:
	Driver(string name, int id, int base, int hours, string position1) {
		this->id = id;
		this->name = name;
		this->base = base;
		this->worktime = hours;
		this->position = position1;
		setPayment(base, hours);
	}

};