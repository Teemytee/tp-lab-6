//
// Created by Александр Славутин on 2019-03-22.
//

#include "Engineer.h"


Engineer::Engineer(int id, string name, int worktime, float base, PROJECT *project, GRADE* grade):Employee(id, name, worktime)
{
    this->base = base;
    this->project = project;
    this->grade = grade;
}

float Engineer::time_payment()
{
    return this->base * this->worktime;

}

float Engineer::project_payment()
{
    return project->budget * this->grade->contribution_level;
}


float Engineer::Payment()
{
    this->payment += time_payment() + project_payment();

}
