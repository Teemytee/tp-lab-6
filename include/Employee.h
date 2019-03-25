//
// Created by Александр Славутин on 2019-03-22.
//
#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Interfaces.h"


using namespace std;


class Employee{
public:
    Employee() = default;
    Employee(int id, string name, int worktime):id(id),name(name),worktime(worktime){}
    virtual void Payment() = 0;
    string  GetName() const
    {
        return this->name;
    }

    int GetID() const
    {
        return this->id;
    }

    int GetWorktime() const {
        return this->worktime;
    }

    int GetPayment(){
        return this->payment;
    }


    void get_info(){
        cout << id << ". " << name <<"." << " The work hours:"<< worktime << ". The payment for work: " << payment << "rubles" << endl;
    }






protected:
    int id;
    string name;
    int worktime;
    int payment = 0;



};
