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
	float get_wage() {
		return this->wage;
	}
protected:
	float wage;
};

Personnel::~Personnel() = default;

class Cleaner : public Personnel {
public:
	Cleaner(int id, std::string name, float wage) {
		this->id = id;
		this->name = std::move(name);
		this->worktime = 0;
		this->wage = wage;
		this->payment = 0;
	};
	~Cleaner() = default;
};

class Driver : public Personnel {
public:
	Driver(int id, std::string name, float wage) {
		this->id = id;
		this->name = std::move(name);
		this->worktime = 0;
		this->wage = wage;
		this->payment = 0;
	};
	~Driver() = default;
};

#endif // !PERSONNEL
