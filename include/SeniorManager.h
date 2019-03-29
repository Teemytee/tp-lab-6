//
// Created by maksi on 24.03.2019.
//

#ifndef LAB6_SENIORMANAGER_H
#define LAB6_SENIORMANAGER_H

#include "ProjectManager.h"

class SeniorManager : public ProjectManager{

public:
    SeniorManager( int num, string f, string projName,
            int budget, double inv, int recruts){
        id = num;
        fio = f;
        project.name = projName;
        project.budget = budget;
        involvement = inv;
        this->recruts = recruts;
        setPayment();
    }

    double calcCashFromPrj() override {
            return project.budget*involvement*1.3;
    }


};

#endif //LAB6_SENIORMANAGER_H
