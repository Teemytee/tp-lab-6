#pragma once
#include "Manager.h"

class ProjectManager : public Manager, public Heading
{
public:
  ProjectManager(std::string _fio);
  ~ProjectManager();
  void pay_for_heading();
  void pay_salary();
};
