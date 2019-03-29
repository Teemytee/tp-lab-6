#pragma once
#include "Employee.h"
#include "Interface.h"
#include "Project.h"

class Manager : public Employee, public ProjectPay
{
protected:
  std::vector<Project*> project_list;
public:
  Manager(std::string _fio);
  virtual ~Manager();
  void pay_salary();
  void pay_for_projects();
  void add_project(Project * new_project);
  Project * access_to_projects(unsigned int x);
  void work(unsigned int hours); //does nothing, fills in for virtual function inherited from Employee
};
