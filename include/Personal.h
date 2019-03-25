#pragma once
#include "Employee.h"
#include "Interface.h"

class Personal : public Employee, public WorkTime
{
protected:
  unsigned int work_time;
  unsigned int hourly_pay;
public:
  Personal(std::string _fio, unsigned int _pay);
  virtual ~Personal();
  unsigned int return_work_time();
  unsigned int return_hourly_pay();
  void work(unsigned int hours);
  void pay_salary();
  void pay_per_hour();
  void add_project(Project * new_project) {}
  Project * access_to_projects(unsigned int x) { return nullptr; }
};
