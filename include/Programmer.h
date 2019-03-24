//
// Created by Александр Славутин on 2019-03-22.
//

#pragma once

class Programmer : public Engineer{
public:
    Programmer():Engineer(){};
    Programmer(int id, string name, int worktime, int base, PROJECT *project, GRADE* grade):Engineer( id, name,worktime,base, project, grade){};
    ~Programmer() = default;
};