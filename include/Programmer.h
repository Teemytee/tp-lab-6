//
// Created by Артем Аросланкин on 24/03/2019.
//

#ifndef LAB6_PROGRAMMER_H
#define LAB6_PROGRAMMER_H

#include "Engineer.h"

class Programmer: public Engineer{
public:
    Programmer() : Engineer() {};
    Programmer(int id, string name, int worktime, double base, string project_name, double budget, double rate){
        this->id = id;
        this->name = name;
        this->worktime = worktime;
        this->base = base;
        this->project_name = project_name;
        this->budget = budget;
        this->rate = rate;
        set_payment();
    }
    ~Programmer(){};

    void set_payment() override{
        this->payment = (project_payment(budget,rate)+calc_worktime(worktime,base));
    }


};
#endif //LAB6_PROGRAMMER_H
