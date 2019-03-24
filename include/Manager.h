//
// Created by Александр Славутин on 2019-03-22.
//

#pragma once
#include "Employee.h"
class Manager:public Employee, public Project{
public:
    Manager(int id, string name, int worktime,  PROJECT *project, GRADE* grade):Employee(id,name,worktime){
        this->project = project;
        this->grade = grade;
    };

    void Payment() override{
        this->payment = project_payment();
    }
    int project_payment() override{
        return this->project->budget * this->grade->contribution_level;
    }

private:
    PROJECT *project;
    GRADE * grade; // grade - is the grading system,which allow to count contribution of employee
};
