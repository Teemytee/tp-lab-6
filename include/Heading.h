//
// Created by Артем Аросланкин on 23/03/2019.
//

#ifndef LAB6_HEADING_H
#define LAB6_HEADING_H

#include "headers.h"

class Heading
{
public:
    Heading() {}
    ~Heading() {}
    virtual double heading_payment(int subordes) = 0;
};
#endif //LAB6_HEADING_H
