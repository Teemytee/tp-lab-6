#pragma once
#include "Personal.h"

class Cleaner : public Personal
{
public:
  Cleaner(std::string _fio, unsigned int _pay);
  ~Cleaner();
};
