//
// Created by Артем Аросланкин on 24/03/2019.
//

#ifndef LAB6_DRIVER_H
#define LAB6_DRIVER_H


#include "headers.h"
#include "Personal.h"

class Driver: public Personal{
public:
    Driver(int id, string name, int worktime, double base) {
        this->id = id;
        this->name = name;
        this->base = base;
        this->worktime = worktime;
        set_payment();
    }

    double calc_worktime(int worktime, double base) override
    {
        payment = worktime * base;
        return payment;
    }
    void set_payment() override {
        payment = calc_worktime(worktime, base);
    }
    ~Driver() {}
};

#endif //LAB6_DRIVER_H
