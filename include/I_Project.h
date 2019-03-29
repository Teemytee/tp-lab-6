//
// Created by pavel on 26.03.19.
//

#ifndef TASK1_I_PROJECT_H
#define TASK1_I_PROJECT_H

#include <string>

struct  PROJECT{
    std::string project_name;
    double budget;
};

class I_Project
{
protected:
    virtual double calcProjectPayment() = 0;
};
#endif //TASK1_I_PROJECT_H
