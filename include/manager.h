#ifndef MAGANER
#define MANAGER

#include "base.h"

class Manager : public Employee, public Project {
public:
	virtual ~Manager() = 0;
protected:
	float share;
};

Manager::~Manager() = default;

class ProjectManager : public Manager, public Heading {
public:
	ProjectManager(int id, std::string name, float share) {
		this->id = id;
		this->name = std::move(name);
		this->share = share;
	};
	~ProjectManager() = default;
};

class SeniorManager : public ProjectManager {
public:
	SeniorManager(int id, std::string name, float share) : ProjectManager(id, name, share) {};
};

#endif // !MAGANER
