//
// Created by pavel on 26.03.19.
//

#ifndef TASK1_DRIVER_H
#define TASK1_DRIVER_H

#include "Personal.h"

class Driver: public Personal
{
public:

    Driver(int _id, std::string _name, int _worktime, double _base) : Personal(_id, _name, _worktime, _base)
    {
        setPayment();
    }

    void setPayment() override
    {
        payment = calcTimePayment();
    }

    double calcTimePayment() override
    {
        return base * worktime;
    }
};

#endif //TASK1_DRIVER_H
