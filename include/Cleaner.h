//
// Created by pavel on 26.03.19.
//

#ifndef TASK1_CLEANER_H
#define TASK1_CLEANER_H

#include "Personal.h"

class Cleaner: public Personal
{
public:

    Cleaner(int _id, std::string _name, int _worktime, double _base) : Personal(_id, _name, _worktime, _base)
    {}

    void setPayment() override
    {
        payment = calcTimePayment();
    }

    double calcTimePayment() override
    {
        return base * worktime;
    }
};


#endif //TASK1_CLEANER_H
