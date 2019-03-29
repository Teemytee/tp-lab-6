#include "Programmer.h"

Programmer::Programmer(std::string _fio, unsigned int _pay) : Engineer(_fio, _pay)
{
  position = "Programmer";
}

Programmer::~Programmer()
{
  
}
