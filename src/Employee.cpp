//
// Created by Александр Славутин on 2019-03-22.
//

#include "Employee.h"




Employee::Employee() {};

Employee::Employee(int id, string name, int worktime):id(id),name(name),worktime(worktime){}



string Employee::GetName() const
{
    return this->name;
}


int Employee::GetID() const
{
    return this->id;
}

int Employee::GetWorktime() const {
    return this->worktime;
}


Employee::~Employee() {};


