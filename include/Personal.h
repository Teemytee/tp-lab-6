#ifndef PERSONAL_H
#define PERSONAL_H

#include "interface.WorkTime.h"
#include "Employee.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class Personal: public Employee, public WorkTime{
protected:
   float base;
public:
      Personal(){}

      void set_base(float _base){
          this->base = _base;
      }

      ~Personal(){}

};

#endif
