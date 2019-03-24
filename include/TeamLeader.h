//
// Created by Артем Аросланкин on 24/03/2019.
//

#ifndef LAB6_TEAMLEADER_H
#define LAB6_TEAMLEADER_H

#include "Programmer.h"
#include "Heading.h"
class TeamLeader : public Programmer, public Heading{
protected:
    int subordes_num;
public:

    TeamLeader() : Programmer() {
        this->subordes_num = 0;
    }
    TeamLeader(int id, string name, int worktime, double base, string project_name, double budget, double rate, int subordes_num){
        this->id = id;
        this->name = name;
        this->worktime = worktime;
        this->base = base;
        this->project_name = project_name;
        this->budget = budget;
        this->rate = rate;
        this->subordes_num = subordes_num;
        set_payment();
    }

    double heading_payment(int subordes) override{
        return subordes * 10;

    }
    void set_payment() override{
        this->payment = heading_payment(subordes_num)+calc_worktime(worktime,base)+project_payment(budget,rate);
    }
};
#endif //LAB6_TEAMLEADER_H
