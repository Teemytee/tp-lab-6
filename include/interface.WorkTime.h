#ifndef INTERFACE_WORKTIME_H
#define INTERFACE_WORKTIME_H

class WorkTime{
public:
    WorkTime() {}
    ~WorkTime() {}
    virtual float get_wotktime_income(float _worktime, float _base) = 0;//почему при занулении все наследники превраза.тся в аюстр классы?
};

#endif // INTERFACE_WORKTIME_H
