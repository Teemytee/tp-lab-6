#ifndef PERSONNEL
#define PERSONNEL

#include "base.h"

class Personnel : public Employee, public WorkTime { //TODO Worktime really public?
public:
	virtual ~Personnel() = 0;
protected:
	float wage;
};

Personnel::~Personnel() = default;

class Cleaner : public Personnel {
public:
	Cleaner(int id, std::string name, float wage) {
		this->id = id;
		this->name = std::move(name);
		this->wage = wage;
	};
	~Cleaner() = default;
};

class Driver : public Personnel {
public:
	Driver(int id, std::string name, float wage) {
		this->id = id;
		this->name = std::move(name);
		this->wage = wage;
	};
	~Driver() = default;
};

#endif // !PERSONNEL
