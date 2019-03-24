//
// Created by Артем Аросланкин on 23/03/2019.
//

#ifndef LAB6_WORKTIME_H
#define LAB6_WORKTIME_H
#include "headers.h"

class WorkTime
{
public:
    WorkTime() {}
    virtual double calc_worktime(int worktime, double base) = 0;
    ~WorkTime() {}
};
#endif //LAB6_WORKTIME_H
