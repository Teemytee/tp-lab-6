//
// Created by Артем Аросланкин on 23/03/2019.
//

#ifndef LAB6_CLEANER_H
#define LAB6_CLEANER_H

#include "headers.h"
#include "Personal.h"

class Cleaner: public Personal{
public:
    Cleaner(int id, string name, int worktime, double base) {
        this->id = id;
        this->name = name;
        this->base = base;
        this->worktime = worktime;
        set_payment();
    }

    void set_payment() override {
        payment = calc_worktime(worktime, base);
    }

    double calc_worktime(int worktime, double base) override
    {
        payment = worktime * base;
        return payment;
    }

    ~Cleaner() {}
};
#endif //LAB6_CLEANER_H
