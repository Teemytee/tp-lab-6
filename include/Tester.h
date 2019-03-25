//
// Created by Александр Славутин on 2019-03-22.
//

#pragma once

#include "Engineer.h"
class Tester: public Engineer{
public:
    Tester(int id, string name, int worktime, int base, PROJECT *project, GRADE* grade):Engineer( id, name,worktime,base, project, grade){};
    ~Tester() = default;
};
