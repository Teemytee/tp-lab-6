//
// Created by pavel on 26.03.19.
//

#ifndef TASK1_EMPLOYEE_H
#define TASK1_EMPLOYEE_H

#include <string>

class Employee {
protected:
    unsigned id;
    std::string name;
    int worktime;
    double payment;

public:
    Employee(unsigned _id, std::string _name, int _worktime)
    {
        id = _id;
        name = _name;
        worktime = _worktime;
    }

    virtual void setPayment() = 0;

    std::string getName()
    {
        return this->name;
    }

    int getId()
    {
        return id;
    }

    double getPayment()
    {
        return payment;
    }
};
#endif //TASK1_EMPLOYEE_H
