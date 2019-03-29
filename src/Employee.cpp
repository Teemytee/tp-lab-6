#include "Employee.h"

unsigned int Employee::count = 0;

Employee::Employee(std::string _fio)
{
  count += 1;
  id = count;
  fio = _fio;
  salary = 0;
}

Employee::~Employee()
{
  count -= 1;
}

unsigned int Employee::return_count()
{
  return count;
}

unsigned int Employee::return_id()
{
  return id;
}

unsigned int Employee::return_salary()
{
  return salary;
}

std::string Employee::return_fio()
{
  return fio;
}

std::string Employee::return_position()
{
  return position;
}
