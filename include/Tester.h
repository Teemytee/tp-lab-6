//
// Created by pavel on 26.03.19.
//

#ifndef TASK1_TESTER_H
#define TASK1_TESTER_H

#include "Engineer.h"

class Tester: public Engineer
{
public:
    Tester(unsigned _id, std::string _name, int _worktime, double _base, PROJECT _project,
               double _involvement): Engineer(_id, _name, _worktime, _base, _project, _involvement)
    {
        setPayment();
    }

    void setPayment() override
    {
        payment = calcTimePayment() + calcProjectPayment();
    }
    double calcTimePayment() override
    {
        return base * worktime;
    }

    double calcProjectPayment() override
    {
        return involvement * project.budget;
    }

};
#endif //TASK1_TESTER_H
