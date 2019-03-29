//
// Created by maksi on 23.03.2019.
//

#ifndef LAB6_PROGRAMMER_H
#define LAB6_PROGRAMMER_H

#include "Engineer.h"

    class Programmer : public Engineer{
    public:
        Programmer() : Engineer(){};

        Programmer(int num, string f, int wtime, string proj, int rate, double inv, int bud){
            fio = f;
            id = num;
            worktime = wtime;
            project.name = proj;
            this-> rate = rate;
            this->involvement = inv;
            this->project.budget = bud;
            setPayment();
        }

};

#endif //LAB6_PROGRAMMER_H
