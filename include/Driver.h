#ifndef DRIVER_H
#define DRIVER_H

#include "Personal.h"

class Driver : public Personal{

public:
    Driver(int _id, std::string _name, float _base, float _worktime){
        this->id = _id;
        this->name = _name;
        this->base = _base;
        this->worktime = _worktime;
        set_payment();
    }

    ~Driver(){}

    float get_wotktime_income(float _worktime, float _base) override{
        this->payment = _worktime * _base;
        return payment;
    }

    void set_payment() override{
        this->payment = get_wotktime_income(this->worktime, this->base);
    }
};

#endif // DRIVER_H
