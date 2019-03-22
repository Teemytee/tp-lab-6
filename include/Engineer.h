//
// Created by Александр Славутин on 2019-03-22.
//
#pragma  once

#include "Employee.h"
#include "Interfaces.h"



class Engineer : public Employee, public virtual Project, public virtual IWorkTime {
public:
   float Payment() override;
   float time_payment() override;
   float project_payment() override;
   Engineer(int id, string name, int worktime, float base, PROJECT *project, GRADE * grade);

private:
    float base;
    PROJECT *project;
    GRADE * grade; // grade - is the grading system,which allow to count contribution of employee
};