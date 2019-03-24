#pragma once
#include <iostream>
#include <string>

class Employee{
private:
  static unsigned int count;
  unsigned int id;
  std::string fio;
  unsigned int worktime;
  unsigned int payment;
public:
  Employee(std::string _fio);
  std::string get_fio();
  unsigned int get_count();
  unsigned int get_id();
};
