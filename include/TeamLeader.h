//
// Created by Александр Славутин on 2019-03-22.
//

#pragma once
#include "Programmer.h"

class TeamLeader:public Programmer, public Heading{
public:
    TeamLeader(int id, string name, int worktime, int base, PROJECT *project, GRADE* grade, int vassals_amount):Programmer( id, name,worktime,base, project, grade){
        this->vassals_amount = vassals_amount;
    };
    int payment_for_people_count() override {
        return this->vassals_amount * 1000;
    }
    void Payment() override{
        this->payment = payment_for_people_count() + project_payment() + time_payment();
    }
    ~TeamLeader() = default;
protected:
    int vassals_amount = 0;
};