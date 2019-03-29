//
// Created by pavel on 26.03.19.
//

#ifndef TASK1_TEAMLEADER_H
#define TASK1_TEAMLEADER_H

#include "Programmer.h"
#include "I_Heading.h"

class TeamLeader: public Programmer, public I_Heading
{
protected:
    unsigned subord_num;

public:
    TeamLeader(unsigned _id, std::string _name, int _worktime, double _base, PROJECT _project, double _involvement,
               unsigned _subord_num): Programmer(_id, _name, _worktime, _base, _project, _involvement)
    {
        subord_num = _subord_num;
    }
    void setPayment() override
    {
        payment = calcTimePayment() + calcProjectPayment() + calcHeadingPayment();
    }
    double calcTimePayment() override
    {
        return base * worktime;
    }

    double calcProjectPayment() override
    {
        return involvement * project.budget;
    }

    double calcHeadingPayment() override
    {
        return subord_num * 500;
    }
};

#endif //TASK1_TEAMLEADER_H
