#include "Employee.h"
using namespace std;
class Personal : public Employee, public WorkTime {
protected:
	int base;
public:
	Personal() : Employee() {}
	int calcWorkTime(int base, int hours) override {
		return hours*base;
	}
	void setPayment(int base, int hours) {
		this->payment = calcWorkTime(base, hours);
	}
};