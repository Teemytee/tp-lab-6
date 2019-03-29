#pragma once
#include "Programmer.h"

class TeamLeader : public Programmer, public Heading
{
public:
  TeamLeader(std::string _fio, unsigned int _pay);
  ~TeamLeader();
  void pay_for_heading();
  void pay_salary();
};
