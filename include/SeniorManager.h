//
// Created by pavel on 26.03.19.
//

#ifndef TASK1_SENIORMANAGER_H
#define TASK1_SENIORMANAGER_H

#include "ProjectManager.h"

class SeniorManager: public ProjectManager
{
public:
    SeniorManager(unsigned _id, std::string _name,  PROJECT _project, double _involvement,
                  unsigned _subord_num): ProjectManager(_id, _name, _project, _involvement, _subord_num)
    {
        setPayment();
    }

    double calcHeadingPayment() override
    {
        return subord_num * 1000;
    }

};
#endif //TASK1_SENIORMANAGER_H
