#ifndef CLEANER_H
#define CLEANER_H

#include "Personal.h"
//#include "EmployeeFactory.h"

class Cleaner : public Personal{
    //friend void CleanerCreator(std::vector<std::string>,  std::vector <Employee*> Employees);
public:
    Cleaner(int _id, std::string _name, float _base, float _worktime){
        this->id = _id;
        this->name = _name;
        this->base = _base;
        this->worktime = _worktime;
        set_payment();
    }

    ~Cleaner(){}

    float get_wotktime_income(float _worktime, float _base) override{
        this->payment = _worktime * _base;
        return payment;
    }

    void set_payment() override{
        this->payment = get_wotktime_income(this->worktime, this->base);
    }

};



#endif // CLEANER_H
