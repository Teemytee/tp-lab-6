#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <sstream>
#include <vector>


class Employee {
protected:
    int id;
    std::string name;
    float worktime;
    float payment;
public:
    Employee() {}
    Employee(int _id, std::string _name, float _worktime) :
        id(_id), name(_name), worktime(_worktime) {}

    ~Employee() {}

    virtual void set_payment() = 0;

    std::string get_name(){
        return this->name;
    }

    float get_payment() {
        return this->payment;
    }

    int get_id() {
        return this->id;
    }
};

#endif // EMPLOYEE_H
