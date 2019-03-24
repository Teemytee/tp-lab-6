//
// Created by Артем Аросланкин on 24/03/2019.
//

#ifndef LAB6_ENGINEER_H
#define LAB6_ENGINEER_H
#include "Worktime.h"
#include "Project.h"
#include "Employee.h"

class Engineer: public Project, public WorkTime, public Employee {
protected:
    int base;
    double rate;
    double budget;
    string project_name;
public:
    Engineer() : Employee(){}
    double project_payment(double budget, double rate) override{
        return budget*rate;
    }

    double calc_worktime(int worktime, double base) override{
        return worktime*base;
    }

    void set_base(double base){
        this->base = base;
    }

    double get_base() const{
        return base;
    }

    void set_project_name(string name){
        this->project_name = name;
    }

    string get_project_name() const{
        return this->project_name;
    }
    void set_rate(double rate){
        this->rate= rate;
    }

    double get_rate() const{
        return this->rate;
    }



};
#endif //LAB6_ENGINEER_H
