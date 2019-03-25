#pragma once
#include "Engineer.h"

class Programmer : public Engineer
{
public:
  Programmer(std::string _fio, unsigned int _pay);
  ~Programmer();
};
