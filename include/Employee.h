#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Project.h"

class Project;

class Employee
{
protected:
  static unsigned int count;
  unsigned int id;
  std::string fio;
  unsigned int salary;
  std::string position;
public:
  Employee(std::string _fio);
  virtual ~Employee();
  std::string return_fio();
  unsigned int return_count();
  unsigned int return_id();
  unsigned int return_salary();
  std::string return_position();
  virtual void pay_salary() = 0;
  virtual void add_project(Project * new_project) = 0;
  virtual void work(unsigned int hours) = 0;
  virtual Project * access_to_projects(unsigned int x) = 0;
};
