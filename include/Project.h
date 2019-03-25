//
// Created by Артем Аросланкин on 23/03/2019.
//

#ifndef LAB6_PROJECT_H
#define LAB6_PROJECT_H

#include "headers.h"

class Project
{
public:
    Project() {}
    ~Project() {}
    virtual double project_payment(double budget, double rate) = 0;

};
#endif //LAB6_PROJECT_H
