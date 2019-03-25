#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include "interface.Project.h"

class Manager : public Employee, public virtual Project
{
protected:
    float involvement;
    PROJECT project;
public:
    Manager() {}
    Manager(int _id, std::string _name, float _involvement, PROJECT _project){
        this->id = _id;
        this->name = _name;
        this->involvement = _involvement;
        this->project = _project;
        set_payment();
    }
    ~Manager(){}

    float get_project_income(PROJECT _project, float _involvement) override{
        return _project.project_budget*_involvement;
    }

    void set_payment() override{
        this->payment = get_project_income(this->project, this->involvement);
    }

};

#endif // MANAGER_H
