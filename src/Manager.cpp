#include "Manager.h"

Manager::Manager(std::string _fio) : Employee(_fio)
{

}

Manager::~Manager()
{

}

void Manager::pay_salary()
{
  pay_for_projects();
}

void Manager::pay_for_projects()
{
  for (unsigned int i = 0; i < project_list.size(); i ++)
  {
    salary += access_to_projects(i)->return_budget() / access_to_projects(i)->return_members_count();
  }
}

void Manager::add_project(Project * new_project)
{
  project_list.push_back(new_project);
}

Project * Manager::access_to_projects(unsigned int x)
{
  return project_list[x];
}

void Manager::work(unsigned int hours)
{
  //does nothing, fills in for virtual function inherited from Employee
}
