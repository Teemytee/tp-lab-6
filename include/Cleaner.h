//
// Created by Александр Славутин on 2019-03-22.
//

#pragma once
#include "Personal.h"

class Cleaner:public  Personal{
public:
    Cleaner(int id, string name, int worktime, int base): Personal(id,  name, worktime, base){};
    ~Cleaner() = default;
};
