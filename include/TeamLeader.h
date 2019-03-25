#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include <ctime>
#include "interface.Heading.h"
#include "Programmer.h"

const int NUMBER_OF_TEAMLEADERS = 3;

class TeamLeader : public Programmer, public Heading {
private:
    int number_of_subordinate;
public:
    TeamLeader() : Programmer() {}
    ~TeamLeader() {}

    TeamLeader(int _id, std::string _name, float _worktime, float _base, float _involvement, PROJECT _project, int _number_of_subordinate){
        this->id = _id;
        this->name = _name;
        this->worktime = _worktime;
        this->base = _base;
        this->involvement = _involvement;
        this->project = _project;
        this->number_of_subordinate = _number_of_subordinate;
        set_payment();
    }

    float premium(int number_of_subordinate) override{
        return number_of_subordinate*1000;
    }

    void set_payment() override{
        this->payment = premium(this->number_of_subordinate) + get_project_income(this->project, this->involvement) + get_wotktime_income(this->worktime, this->base);
    }

};

#endif // TEAMLEADER_H
