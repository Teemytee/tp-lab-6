//
// Created by maksi on 16.03.2019.
//

#ifndef LAB6_PERSONAL_H
#define LAB6_PERSONAL_H

#include "Employee.h"
#include "WorkTime.h"

class Personal : public Employee, public Worktime{


protected:
   int rate;

public:
    Personal() = default;

    void setRate(int r){
        rate = r;
    }

    double calcPayment() final {
        return rate*worktime;
    }

    virtual void setInv(double inv) final {};
    virtual void setBudget(int c) final{};

};


#endif //LAB6_PERSONAL_H
