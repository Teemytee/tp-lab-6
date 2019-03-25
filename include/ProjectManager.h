#ifndef PROJECTMANAGER_H
#define PROJECTMANAGER_H

#include "interface.Heading.h"
#include "Manager.h"

class ProjectManager : public Manager, public Heading
{
protected:
    int number_of_subordinate;
public:
    ProjectManager(){}
    ProjectManager(int _id, std::string _name, float _involvement, PROJECT _project, int _number_of_subordinate){
        this->id = _id;
        this->name = _name;
        this->involvement = _involvement;
        this->project = _project;
        this->number_of_subordinate = _number_of_subordinate;
        set_payment();
    }

    ~ProjectManager() {}

    float premium(int number_of_subordinate) override{
        return number_of_subordinate*1000;
    }

    void set_payment() override{
        this->payment = premium(this->number_of_subordinate) + get_project_income(this->project, this->involvement);
    }

};

#endif // PROJECTMANAGER_H
