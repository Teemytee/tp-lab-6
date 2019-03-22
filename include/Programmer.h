//
// Created by Александр Славутин on 2019-03-22.
//

#pragma once


#include "Engineer.h"

class Programmer: public Engineer {
    Programmer(int id, string name, int worktime, float base, PROJECT *project, GRADE * grade);
    ~Programmer();
};
