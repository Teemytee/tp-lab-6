#include "Project.h"

Project::Project(std::string _title, unsigned int _budget)
{
  budget = _budget;
  title = _title;
}

Project::~Project()
{

}

unsigned int Project::return_budget()
{
  return budget;
}

std::string Project::return_title()
{
  return title;
}

void Project::add_member(Employee * new_member)
{
  members.push_back(new_member);
  new_member->add_project(this);
}

unsigned int Project::return_members_count()
{
  return members.size();
}

Employee * Project::access_to_member(unsigned int x)
{
  return members[x];
}
