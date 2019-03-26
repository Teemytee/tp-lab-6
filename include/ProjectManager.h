//
// Created by pavel on 26.03.19.
//

#ifndef TASK1_PROJECTMANAGER_H
#define TASK1_PROJECTMANAGER_H

#include "Manager.h"
#include "I_Heading.h"

class ProjectManager: public Manager, public I_Heading
{
protected:
    unsigned subord_num;

public:
    ProjectManager(unsigned _id, std::string _name, PROJECT _project, double _involvement,
               unsigned _subord_num): Manager(_id, _name, _project, _involvement)
    {
        subord_num = _subord_num;
        setPayment();
    }
    void setPayment() override
    {
        payment = calcProjectPayment() + calcHeadingPayment();
    }

    double calcHeadingPayment() override
    {
        return subord_num * 500;
    }
};
#endif //TASK1_PROJECTMANAGER_H
