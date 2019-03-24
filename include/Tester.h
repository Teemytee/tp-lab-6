//
// Created by maksi on 23.03.2019.
//

#ifndef LAB6_TESTER_H
#define LAB6_TESTER_H

#include "Engineer.h"

class Tester : public Engineer{
public:
    Tester() : Engineer(){};

    Tester(int num, string f, int wtime, string proj, int rate, double inv, int bud){
        fio = f;
        id = num;
        worktime = wtime;
        project.name = proj;
        this-> rate = rate;
        this->involvement = inv;
        this->project.budget = bud;
    }




};

#endif //LAB6_TESTER_H
