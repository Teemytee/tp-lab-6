#include <personnel.h>

Personnel::~Personnel() = default;

float Personnel::get_wage() {
	return this->wage;
}

Cleaner::Cleaner(int id, std::string name, float wage) {
	this->id = id;
	this->name = std::move(name);
	this->worktime = 0;
	this->wage = wage;
	this->payment = 0;
}

Cleaner::~Cleaner() = default;

Driver::Driver(int id, std::string name, float wage) {
	this->id = id;
	this->name = std::move(name);
	this->worktime = 0;
	this->wage = wage;
	this->payment = 0;
}

Driver::~Driver() = default;
