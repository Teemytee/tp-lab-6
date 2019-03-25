#include "TeamLeader.h"

TeamLeader::TeamLeader(std::string _fio, unsigned int _pay) : Programmer(_fio, _pay)
{
  position = "TeamLeader";
}

TeamLeader::~TeamLeader()
{

}

void TeamLeader::pay_salary()
{
  pay_per_hour();
  pay_for_projects();
  pay_for_heading();
}

void TeamLeader::pay_for_heading()
{
  unsigned int count_heading = 0;
  for (unsigned int i = 0; i < project_list.size(); i++)
  {
    count_heading += project_list[i]->return_members_count()-1;
  }
  salary += count_heading * 1000;
}
