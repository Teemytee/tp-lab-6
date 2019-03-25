#include "ProjectManager.h"

ProjectManager::ProjectManager(std::string _fio) : Manager(_fio)
{
  position = "ProjectManager";
}

ProjectManager::~ProjectManager()
{

}

void ProjectManager::pay_salary()
{
  pay_for_projects();
  pay_for_heading();
}

void ProjectManager::pay_for_heading()
{
  unsigned int count_heading = 0;
  for (unsigned int i = 0; i < project_list.size(); i++)
  {
    count_heading += project_list[i]->return_members_count()-1;
  }
  salary += count_heading * 1000;
}
