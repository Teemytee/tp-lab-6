//
// Created by maksi on 23.03.2019.
//

#ifndef LAB6_TEAMLEADER_H
#define LAB6_TEAMLEADER_H

#include "Programmer.h"
#include "Heading.h"

class TeamLeader : public Programmer, public Heading {
protected:
    int recruts;
    int headBonus;

public:

    TeamLeader(int num, string f, int wtime, string proj, int rate, double inv, int budget, int recruts){
        fio = f;
        id = num;
        worktime = wtime;
        project.name = proj;
        this-> rate = rate;
        this->involvement = inv;
        this->project.budget = budget;
        this->recruts = recruts;
        setBonus();
        setPayment();
    }

    int calcHeadingBonus() override {
        return recruts*1200;
    }

    void setBonus(){
        headBonus = calcHeadingBonus();
    }

    void setPayment() override {
        payment = calcCashFromPrj()+calcPayment()+headBonus;
    }
};

#endif //LAB6_TEAMLEADER_H
