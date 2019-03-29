#include "Engineer.h"

Engineer::Engineer(std::string _fio, unsigned int _pay) : Employee(_fio)
{
  work_time = 0;
  hourly_pay = _pay;
}

Engineer::~Engineer()
{

}

unsigned int Engineer::return_work_time()
{
  return work_time;
}

unsigned int Engineer::return_hourly_pay()
{
  return hourly_pay;
}

void Engineer::work(unsigned int hours)
{
  work_time += hours;
}

void Engineer::pay_salary()
{
  pay_per_hour();
  pay_for_projects();
}

void Engineer::pay_per_hour()
{
  salary += work_time * hourly_pay;
  work_time = 0;
}

void Engineer::pay_for_projects()
{
  for (unsigned int i = 0; i < project_list.size(); i ++)
  {
    salary += access_to_projects(i)->return_budget() / access_to_projects(i)->return_members_count();
  }
}

void Engineer::add_project(Project * new_project)
{
  project_list.push_back(new_project);
}

Project * Engineer::access_to_projects(unsigned int x)
{
  return project_list[x];
}
