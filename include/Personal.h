//
// Created by pavel on 26.03.19.
//

#ifndef TASK1_PERSONAL_H
#define TASK1_PERSONAL_H

#include "Employee.h"
#include "I_WorkTime.h"

class Personal: public I_Worktime, public Employee
{
protected:

    double base;

public:
    Personal(int _id, std::string _name, int _worktime, double _base): Employee(_id,  _name, _worktime)
    {
        base = _base;
    }

};

#endif //TASK1_PERSONAL_H
