//
// Created by maksi on 24.03.2019.
//

#ifndef LAB6_MANAGER_H
#define LAB6_MANAGER_H

#include "Employee.h"
#include "Project.h"

class Manager : public Employee, public Project{
protected:
    prj project;
    double involvement;

private:
    void setRate(int r) final {};

public:
    Manager(){};
    Manager( int num, string f, int wtime, string projName, int budget, double inv){
        id = num;
        fio = f;
        worktime = wtime;
        project.name = projName;
        project.budget = budget;
        involvement = inv;
    }

    double calcCashFromPrj() override {
        return project.budget*involvement;
    }






};

#endif //LAB6_MANAGER_H
