//
// Created by maksi on 24.03.2019.
//

#ifndef LAB6_PROJECTMANAGER_H
#define LAB6_PROJECTMANAGER_H

#include "Manager.h"
#include "Heading.h"

class ProjectManager : public Manager, public Heading{
protected:
        int recruts;

public:
    ProjectManager(){};

    ProjectManager(int num, string f, string projName,
            int budget, double inv, int recruts){
        id = num;
        fio = f;
        worktime = 0;
        project.name = projName;
        project.budget = budget;
        involvement = inv;
        this->recruts = recruts;
        setPayment();
    }

    void setPayment() override{
            payment = calcCashFromPrj()+ calcHeadingBonus();
    }

    void setBudget(int a) override{
        project.budget = a;
    }

    int calcHeadingBonus() override{
            return recruts*1200;
    }

};

#endif //LAB6_PROJECTMANAGER_H
