//
// Created by maksi on 23.03.2019.
//

#ifndef LAB6_ENGINEER_H
#define LAB6_ENGINEER_H

#include "WorkTime.h"
#include "Employee.h"
#include "Project.h"


class Engineer : public Employee, public Worktime, public Project{
protected:
    int rate;
    prj project;
    double involvement;

public:
    Engineer() = default;

    double calcPayment() final {
        return rate*worktime;
    }

    double calcCashFromPrj() final {
        return involvement*project.budget;
    }

    /*void setInv(double inv)
    {
        involvement = inv;
        this->setPayment();
    }*/

    void setRate(int r){
        rate = r;
        this->setPayment();
    }

    void setPayment() override {
        payment = calcCashFromPrj()+calcPayment();
    }

    void setBudget(int budget){
        project.budget = budget;
    }
};

#endif //LAB6_ENGINEER_H
