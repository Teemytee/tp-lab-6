//
// Created by Александр Славутин on 2019-03-22.
//
#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Employee{
public:
    Employee();
    Employee(int id, string name, int worktime);
    virtual float Payment() = 0;
    int GetID () const;
    int GetWorktime () const;
    string GetName () const;
    ~Employee();



protected:
    int id;
    string name;
    int worktime;
    int payment;


};
