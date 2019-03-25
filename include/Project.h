#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Employee.h"

class Employee;

class Project
{
private:
  unsigned int budget;
  std::string title;
  std::vector<Employee*> members;
public:
  Project(std::string _title, unsigned int _budget);
  ~Project();
  unsigned int return_budget();
  std::string return_title();
  void add_member(Employee * new_member);
  unsigned int return_members_count();
  Employee * access_to_member(unsigned int x);
};
