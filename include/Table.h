//
// Created by maksi on 24.03.2019.
//

#ifndef LAB6_TABLE_H
#define LAB6_TABLE_H

#include "parse.h"

void Statistics(vector<Employee*> stat){
    for (auto worker: stat)
    {
        cout << "id " <<worker->getId() << ": " <<worker->getName() << " payment: " << worker->getPayment();
        if (worker->getWorktime()!=0)
            cout << " for " << worker->getWorktime() << " hours" << endl;
        else cout << endl;
    }

}

#endif //LAB6_TABLE_H
