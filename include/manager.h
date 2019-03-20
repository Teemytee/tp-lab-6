#ifndef MAGANER
#define MANAGER

#include "base.h"

class Manager : public Employee, public Project {
public:
	virtual ~Manager() = 0;
	void calculate_share() override {
		this->payment += this->share * 0.85;
	};
	float get_share() {
		return this->share;
	}
	int get_projects() {
		return this->projects;
	}
protected:
	float share;
	int projects;
};

Manager::~Manager() = default;

class ProjectManager : public Manager, public Heading {
public:
	ProjectManager(int id, std::string name, float share, int projects) {
		this->id = id;
		this->name = std::move(name);
		this->worktime = 0;
		this->share = share;
		this->payment = 0;
		this->projects = projects;
	};
	~ProjectManager() = default;
	void calculate_head() override {
		this->payment += this->share * 0.25;
	};
protected:
	float head;
};

class SeniorManager : public ProjectManager {
public:
	SeniorManager(int id, std::string name, float share, int projects) : ProjectManager(id, name, share, projects) {};
};

#endif // !MAGANER
