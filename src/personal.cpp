#include <personal.h>



Employee::Employee(int id, std::string name, int worktime) {
    this->id = id;
    this->name = std::move(name);
    this->worktime = worktime;
}

Personal::Personal(int id, std::string name, int worktime, int rate) :
        Employee(id, std::move(name), worktime) {
    this->rate = rate;
}

float Personal::payment() {
    return rate * worktime;
}


Engineer::Engineer(int id, std::string name, int worktime, int rate, Job* project) :
        Employee(id, std::move(name), worktime) {
    this->rate = rate;
    this->project = project;
}

float Engineer::payment() {
    return rate * worktime + project->buget * ((float)worktime / project->worktime);
}

Manager::Manager(int id, std::string name, int worktime, Job* project) :
        Employee(id, std::move(name), worktime)  {
    this->project = project;
}

float Manager::payment() {
    return project->buget * ((float)worktime / project->worktime);
}


Cleaner::Cleaner(int id, std::string name, int worktime, int rate) :
        Personal(id, std::move(name), worktime, rate) {

}

float Cleaner::payment() {
    return Personal::payment();
}


Driver::Driver(int id, std::string name, int worktime, int rate) :
        Personal(id, std::move(name), worktime, rate) {
}

float Driver::payment() {
    return Personal::payment();
}

Programmer::Programmer(int id, std::string name, int worktime, int rate, Job* project) :
        Engineer(id, std::move(name), worktime, rate, project) {

}

float Programmer::payment() {
    return Engineer::payment();
}



TeamLeader::TeamLeader(int id, std::string name, int worktime, int rate, Job* project, int people) :
        Programmer(id, std::move(name), worktime, rate, project) {
    this->people = people;
}

float TeamLeader::payment() {
    return Programmer::payment() + people;
}

Tester::Tester(int id, std::string name, int worktime, int rate, Job* project) :
        Engineer(id, std::move(name), worktime, rate, project) {
}

float Tester::payment() {
    return Engineer::payment();
}



ProjectManager::ProjectManager(int id, std::string name, int worktime, Job* project, int people) :
        Manager(id, std::move(name), worktime, project) {
    this->people = people;
}

float ProjectManager::payment() {
    return Manager::payment() + people;
}




SeniorManager::SeniorManager(int id, std::string name, int worktime, Job* project, int people) :
        ProjectManager(id, std::move(name), worktime, project, people) {

}

float SeniorManager::payment() {
    return ProjectManager::payment();
}





Job::Job(int id, std::string name, int buget) {
    this->id = id;
    this-> name = std::move(name);
    this->buget = buget;
}


