//
// Created by Артем Аросланкин on 23/03/2019.
//

#ifndef LAB6_PERSONAL_H
#define LAB6_PERSONAL_H
#include "Worktime.h"
#include "Employee.h"

class Personal: public Employee, public WorkTime
        {
protected:
    double base;
public:
    Personal(){}
    ~Personal(){}
    void set_base(double base){
        this->base = base;
    }
    double get_base() const{
        return base;
    }



};
#endif //LAB6_PERSONAL_H
