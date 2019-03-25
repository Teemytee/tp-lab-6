//
// Created by Артем Аросланкин on 23/03/2019.
//

#ifndef LAB6_EMPLOYEE_H
#define LAB6_EMPLOYEE_H

#include "headers.h"

class Employee{
protected:
    int id;
    int worktime;
    double payment;
    string name;
public:
    Employee(){}
    Employee(int id, string name, int worktime, double payment ){
        this->id = id;
        this->name = name;
        this->worktime = worktime;
    }

    ~Employee() {}

    virtual void set_payment() = 0;

    void set_id(int id){
        this->id=id;
    }

    void set_worktime(int worktime){
        this->worktime = worktime;
    }

    void set_name(string name){
        this->name = name;
    }

    string get_name() const{
        return this->name;
    }

    int get_id() const{
        return id;
    }
    int get_worktime() const{
        return worktime;
    }
    double get_payment() const{
        return payment;
    }


};

#endif //LAB6_EMPLOYEE_H
