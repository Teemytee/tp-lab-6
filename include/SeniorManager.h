//
// Created by Артем Аросланкин on 24/03/2019.
//

#ifndef LAB6_SENIORMANAGER_H
#define LAB6_SENIORMANAGER_H

#include "ProjectManager.h"

class SeniorManager: public ProjectManager{
protected:
    int project_num;
public:
    SeniorManager(): ProjectManager(){
        this->project_num = 0;
    }
    SeniorManager(int id, string name, double budget, double rate, int subordes_num, int project_num ){
        this->id = id;
        this->name = name;
        //this->project_name = project_name;
        this->budget = budget;
        this->rate = rate;
        this->subordes_num = subordes_num;
        this->project_num = project_num;
        set_payment();
    }

    double project_payment(double budget, double rate) override{
        return (budget*rate*project_num);
    }
    void set_payment() override{
        this->payment = heading_payment(subordes_num)+project_payment(budget,rate);
    }
};
#endif //LAB6_SENIORMANAGER_H
