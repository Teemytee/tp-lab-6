//
// Created by Александр Славутин on 2019-03-22.
//
#pragma  once

#include "Employee.h"



class Engineer : public Employee, public  Project, public IWorkTime {
public:
    Engineer():Employee(){};
    int time_payment() override
    {
        return this->base * this->worktime;

    }

    int project_payment() override
    {
        return this->project->budget * this->grade->contribution_level;
    }


    void Payment() override
    {
        this->payment = time_payment() + project_payment();

    }
    Engineer(int id, string name, int worktime, int base, PROJECT *project, GRADE* grade):Employee(id, name, worktime)
    {
        this->base = base;
        this->project = project;
        this->grade = grade;
    }

private:
    int base;
    PROJECT *project;
    GRADE * grade; // grade - is the grading system,which allow to count contribution of employee
};