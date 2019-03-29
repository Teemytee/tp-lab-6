#pragma once
#include "Personal.h"

class Driver : public Personal
{
public:
  Driver(std::string _fio, unsigned int _pay);
  ~Driver();
};
