#pragma once
#include "Employee.h"
#include "Interface.h"
#include "Project.h"

class Engineer : public Employee, public WorkTime, public ProjectPay
{
protected:
  unsigned int work_time;
  unsigned int hourly_pay;
  std::vector<Project*> project_list;
public:
  Engineer(std::string _fio, unsigned int _pay);
  virtual ~Engineer();
  unsigned int return_work_time();
  unsigned int return_hourly_pay();
  void work(unsigned int hours);
  void pay_salary();
  void pay_per_hour();
  void pay_for_projects();
  void add_project(Project * new_project);
  Project * access_to_projects(unsigned int x);
};
