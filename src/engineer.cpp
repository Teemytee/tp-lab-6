#include <engineer.h>

Engineer::~Engineer() = default;

float Engineer::get_salary() {
	return this->salary;
}

int Engineer::get_projects() {
	return this->projects;
}

Tester::Tester(int id, std::string name, float salary, int projects) {
	this->id = id;
	this->name = std::move(name);
	this->worktime = 0;
	this->salary = salary;
	this->payment = 0;
	this->projects = projects;
}

Tester::~Tester() = default;

Programmer::Programmer(int id, std::string name, float salary, int projects) {
	this->id = id;
	this->name = std::move(name);
	this->worktime = 0;
	this->salary = salary;
	this->payment = 0;
	this->projects = projects;
}

Programmer::~Programmer() = default;

TeamLeader::TeamLeader(int id, std::string name, float salary, int projects)
	: Programmer(id, name, salary, projects) {};

TeamLeader::~TeamLeader() = default;