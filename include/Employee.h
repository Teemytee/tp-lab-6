//
// Created by maksi on 16.03.2019.
//

#ifndef LAB6_EMPLOYEE_H
#define LAB6_EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
protected:
    int id;
    string fio;
    int worktime = 0;
    double payment;

public:


    Employee() = default;

    Employee(string f, int num, int wtime){
        id = num;
        fio = f;
        worktime = wtime;
    }

    virtual void setPayment() = 0;

    int getId(){
        return id;
    }

    double getPayment(){
        return payment;
    };

    string getName(){
        return fio;
    }

    int getWorktime(){
        return worktime;
    }



    virtual void setRate(int r) = 0;
    virtual void setBudget(int c) = 0;

};


#endif //LAB6_EMPLOYEE_H
