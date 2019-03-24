//
// Created by Александр Славутин on 2019-03-22.
//

#pragma once

#include "Manager.h"
class ProjectManager:public Manager{
public:
    ProjectManager(int id, string name, int worktime,  PROJECT *project, GRADE* grade):Manager(id,  name, worktime, project, grade){};
};
class SeniorManager:public ProjectManager{
public:
    SeniorManager(int id, string name, int worktime,  PROJECT *project, GRADE* grade):ProjectManager(id,  name, worktime, project, grade){};
    ~SeniorManager() = default;

};