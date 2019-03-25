//
// Created by Артем Аросланкин on 24/03/2019.
//

#ifndef LAB6_PROJECTMANAGER_H
#define LAB6_PROJECTMANAGER_H

#include "Manager.h"
#include "Heading.h"

class ProjectManager : public Manager, public Heading{
protected:
    int subordes_num;
public:
    ProjectManager() : Manager() {
        this->subordes_num = 0;
    }
    ProjectManager(int id, string name, string project_name, double budget, double rate, int subordes_num ){
        this->id = id;
        this->name = name;
        this->project_name = project_name;
        this->budget = budget;
        this->rate = rate;
        this->subordes_num = subordes_num;
        set_payment();
    }
    ~ProjectManager() {}

    double heading_payment(int subordes) override{
        return subordes * 10;
    }

    void set_payment() override{
        this->payment = heading_payment(subordes_num)+project_payment(budget,rate);
    }

};
#endif //LAB6_PROJECTMANAGER_H
