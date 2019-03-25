#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "Engineer.h"
#include <fstream>

class Programmer : public Engineer{
public:
    Programmer() : Engineer() {}

    Programmer(int _id, std::string _name, float _worktime, float _base, float _involvement, PROJECT _project){
        this->id = _id;
        this->name = _name;
        this->worktime = _worktime;
        this->base = _base;
        this->involvement = _involvement;
        this->project = _project;
        set_payment();
    }

    void set_payment() override{
        this->payment = get_project_income(this->project, this->involvement) + get_wotktime_income(this->worktime, this->base);
    }

    ~Programmer(){}
};
#endif // PROGRAMMER_H
