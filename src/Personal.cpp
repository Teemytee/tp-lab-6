#include "Personal.h"

Personal::Personal(std::string _fio, unsigned int _pay) : Employee(_fio)
{
  work_time = 0;
  hourly_pay = _pay;
}

Personal::~Personal()
{

}

unsigned int Personal::return_work_time()
{
  return work_time;
}

unsigned int Personal::return_hourly_pay()
{
  return hourly_pay;
}

void Personal::work(unsigned int hours)
{
  work_time += hours;
}

void Personal::pay_salary()
{
  pay_per_hour();
}

void Personal::pay_per_hour()
{
  salary += work_time * hourly_pay;
  work_time = 0;
}
