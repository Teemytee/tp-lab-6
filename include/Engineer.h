//
// Created by pavel on 26.03.19.
//

#ifndef TASK1_ENGINEER_H
#define TASK1_ENGINEER_H


#include "I_WorkTime.h"
#include "Employee.h"
#include "I_Project.h"

class Engineer: public I_Worktime, public Employee, public I_Project
{
protected:
    double base;
    PROJECT project;
    double involvement;

public:
    Engineer(unsigned _id, std::string _name, int _worktime,
             double _base, PROJECT _project, double _involvement): Employee(_id, _name, _worktime)
    {
        base = _base;
        project = _project;
        involvement = _involvement;
    }

    void setBase(double base)
    {
        this->base = base;
    }

    double getBase()
    {
        return base;
    }

    void setinvolvement(double involvement)
    {
        this->involvement= involvement;
    }

    double getinvolvement()
    {
        return this->involvement;
    }
};
#endif //TASK1_ENGINEER_H
