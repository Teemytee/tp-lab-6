#include <manager.h>

Manager::~Manager() = default;

float Manager::get_share() {
	return this->share;
}

int Manager::get_projects() {
	return this->projects;
}
