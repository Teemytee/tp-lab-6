//
// Created by maksi on 22.03.2019.
//

#include "Personal.h"

#ifndef LAB6_CLEANER_H
#define LAB6_CLEANER_H

class Cleaner : public Personal{

public:
    Cleaner(int id, string fio, int worktime, int rate){
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


#endif //LAB6_CLEANER_H
