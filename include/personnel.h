#ifndef PERSONNEL
#define PERSONNEL

#include "base.h"

class Personnel : public Employee, public WorkTime { //TODO Worktime really public?
public:
	virtual ~Personnel() = 0;
	void calculate_work_pay(int hours) override {
		this->worktime += hours;
		this->payment += this->wage * 1 * hours;
	};
	float get_wage();
protected:
	float wage;
};

class Cleaner : public Personnel {
public:
	Cleaner(int, std::string, float);
	~Cleaner();
};

class Driver : public Personnel {
public:
	Driver(int, std::string, float);
	~Driver();
};

#endif // !PERSONNEL
