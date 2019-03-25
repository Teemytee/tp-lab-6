#pragma once
#include "Engineer.h"

class Tester : public Engineer
{
public:
  Tester(std::string _fio, unsigned int _pay);
  ~Tester();
};
