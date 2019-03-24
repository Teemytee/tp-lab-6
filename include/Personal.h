//
// Created by Александр Славутин on 2019-03-22.
//
#pragma once

#include "Employee.h"

class Personal: public Employee, public  IWorkTime{
public:
    Personal():Employee(){};
    Personal(int id, string name, int worktime, int base): Employee(id,  name, worktime){
        this->base = base;
    };
    void Payment() override{
        this->payment = time_payment();
    }
    int time_payment() override
    {
        return this->base * this->worktime;

    }
    string cleaning(){
        cout<< "I am cleaning now";
    }
protected:
    int base;

};