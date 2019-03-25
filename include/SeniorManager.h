#ifndef SENIORMANAGER_H
#define SENIORMANAGER_H

#include "ProjectManager.h"

const int NUMBER_OF_SENIORMANAGERS = 4;

class SeniorManager : public ProjectManager
{
protected:
    float header_premium;
public:
    SeniorManager(int _id, std::string _name, float _involvement, PROJECT _project, int _number_of_subordinate, float _header_premium){
        this->id = _id;
        this->name = _name;
        this->involvement = _involvement;
        this->project = _project;
        this->number_of_subordinate = _number_of_subordinate;
        this->header_premium = _header_premium;
        set_payment();
    }

    ~SeniorManager() {}

    float premium(int number_of_subordinate) override{
        return (number_of_subordinate+(this->header_premium))*1000;
    }

    void set_payment() override{
        this->payment = premium(this->number_of_subordinate) + get_project_income(this->project, this->involvement);
    }
};

#endif // SENIORMANAGER_H
