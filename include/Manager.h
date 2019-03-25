//
// Created by Артем Аросланкин on 24/03/2019.
//

#ifndef LAB6_MANAGER_H
#define LAB6_MANAGER_H

#include "Employee.h"
#include "Project.h"
class Manager: public Employee, public  Project{
protected:
    double rate;
    double budget;
    string project_name;
public:
    Manager() :Employee(){
        this->rate=0;
        this->budget = 0;
        this->project_name = "";
    }

    Manager(int id, string name, string project_name, double budget, double rate){
        this->id = id;
        this->name = name;
        this->project_name = project_name;
        this->budget = budget;
        this->rate = rate;
        set_payment();
    }
    ~Manager() {}

    double project_payment(double budget, double rate) override{
        return budget*rate;
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

    void set_payment() override{
        this->payment = project_payment(budget,rate);
    }

};
#endif //LAB6_MANAGER_H
