#ifndef ENGINEER_H
#define ENGINEER_H

#include "Employee.h"
#include "interface.Project.h"
#include "interface.WorkTime.h"

class Engineer : public Employee, public virtual Project, public virtual WorkTime{
protected:
    float base;
    PROJECT project;
    float involvement;
public:
    Engineer() : Employee() {}
    ~Engineer(){}

    float get_project_income(PROJECT _project, float _involvement) override{
        return _project.project_budget * _involvement;
    }
    float get_wotktime_income(float _worktime, float _base) override{
        return _worktime * _base;
    }


};

#endif // ENGINEER_H
