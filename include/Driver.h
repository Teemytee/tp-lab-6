//
// Created by maksi on 23.03.2019.
//

#ifndef LAB6_DRIVER_H
#define LAB6_DRIVER_H

#include "Personal.h"

class Driver : public Personal{
public:
    Driver(int id, string fio, int worktime, int rate){
        this->id = id;
        this->fio = fio;
        this->worktime = worktime;
        this->rate = rate;
        setPayment();
    }

    void setPayment() {
        this->payment = calcPayment();
    }

};

#endif //LAB6_DRIVER_H
