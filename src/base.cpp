#include <base.h>

Employee::~Employee() = default;

int Employee::get_id() {
	return this->id;
}

const std::string &Employee::get_name() const {
	return this->name;
}

float Employee::get_worktime() {
	return this->worktime;
}

float Employee::get_payment() {
	return this->payment;
}