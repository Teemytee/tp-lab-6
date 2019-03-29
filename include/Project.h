//
// Created by maksi on 23.03.2019.
//

#ifndef LAB6_PROJECT_H
#define LAB6_PROJECT_H

struct prj{
    double budget;
    string name;

    void setBudget(double bdg) {
        budget = bdg;
    }
};

class Project{
    virtual double calcCashFromPrj() = 0;
};

#endif //LAB6_PROJECT_H
