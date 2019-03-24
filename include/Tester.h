//
// Created by Артем Аросланкин on 24/03/2019.
//

#ifndef LAB6_TESTER_H
#define LAB6_TESTER_H

#endif //LAB6_TESTER_H

#include "Engineer.h"

class Tester: public Engineer{
public:
    Tester() : Engineer() {};
    Tester(int id, string name, int worktime, double base, string project_name, double budget, double rate){
        this->id = id;
        this->name = name;
        this->worktime = worktime;
        this->base = base;
        this->project_name = project_name;
        this->budget = budget;
        this->rate = rate;
        set_payment();
    }
    ~Tester(){};

    void set_payment() override{
        this->payment = (project_payment(budget,rate)+calc_worktime(worktime,base));
    }

    void testing() const{
        cout <<"i can test smth" << endl;
    }


};