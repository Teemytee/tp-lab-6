#ifndef HEADING_H
#define HEADING_H

#include <iostream>
#include <ctime>
#include <random>


class Heading
{
public:
    Heading(){}
    ~Heading(){}
    virtual float premium(int number_of_subordinate) = 0;
};

#endif // HEADING_H
