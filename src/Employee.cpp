#include "Employee.h"

unsigned int Employee::count = 0;

Employee::Employee(std::string _fio){
  fio = _fio;
  count += 1;
  id = count;
  worktime = 0;
}

std::string Employee::get_fio(){
  return fio;
}

unsigned int Employee::get_count(){
  return count;
}

unsigned int Employee::get_id(){
  return id;
}
