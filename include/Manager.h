//
// Created by pavel on 26.03.19.
//

#ifndef TASK1_MANAGER_H
#define TASK1_MANAGER_H

#include "Employee.h"
#include "I_Project.h"

class Manager: public Employee, public I_Project
{
protected:
    PROJECT project;
    double involvement;
public:
    Manager(unsigned _id, std::string _name,
            PROJECT _project, double _involvement):Employee(_id, _name, 0)
    {
        project = _project;
        involvement = _involvement;
        setPayment();
    }

    void setPayment() override
    {
        payment = calcProjectPayment();
    }

    double calcProjectPayment() override
    {
        return involvement * project.budget;
    }
};
#endif //TASK1_MANAGER_H
