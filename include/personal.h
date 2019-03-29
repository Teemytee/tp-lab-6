#ifndef TASK1_EMPLOYEE_H
#define TASK1_EMPLOYEE_H


#include <utility>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>




class Job {
public:
    int id;
    std::string name;
    int buget;
    int worktime = 0;
    Job(int id, std::string name, int buget);
};


class Employee {     // - работник. Основной родительский класс для всех разновидностей работников.
//protected:
public:
    int id; // - идентификационный номер.
    std::string name; // - ФИО.
    int worktime; // - отработанное время.

// public:
    Employee(int id, std::string name, int worktime);
    virtual float payment() = 0; // - заработная плата.
};


class WorkTime { //- расчет оплаты исходя из отработанного времени (часы умножаются на ставку).
protected:
    int rate;
};

class Project { //- расчет оплаты исходя из участия в проекте (бюджет проекта делится пропорционально персональному вкладу).
protected:
    Job* project;
};

class Heading { //- расчет оплаты исходя из руководства (количество подчиненных).
protected:
    int people;
};





class Personal : public Employee, public WorkTime {  //- работник по найму с оплатой за фактически отработанное время. Имеет ставку за час.
public:
    Personal(int id, std::string name, int worktime, int rate);
    float payment();
};



class Engineer : public Employee, public WorkTime, public Project { // - инженер. Имеет ставку и оплату за час + бонусы от выполняемого проекта.
public:
    Engineer (int id, std::string name, int worktime, int rate, Job* project);
    float payment();
};


class Manager : public Employee, public Project  { //- менеджер. Оплату получает из денег проекта, которым руководит.

public:
    Manager(int id, std::string name, int worktime, Job* project);
    float payment();
};



class Cleaner : public Personal { // - уборщица.
public:
    Cleaner(int id, std::string name, int worktime, int rate);
    float payment();
};


class Driver : public Personal { // - водитель.
public:
    Driver(int id, std::string name, int worktime, int rate);
    float payment();
};




class Programmer : public Engineer { //- инженер-программист.
public:
    Programmer(int id, std::string name, int worktime, int rate, Job* project);
    float payment();
};


class TeamLeader : public Programmer, public Heading { //- ведущий программист.
public:
    TeamLeader(int id, std::string name, int worktime, int rate, Job* project, int people);
    float payment();
};



class Tester : public Engineer { // - инженер по тестированию.
public:
    Tester(int id, std::string name, int worktime, int rate, Job* project);
    float payment();
};



class ProjectManager : public Manager, public Heading { //- проектный менеджер.
public:
    ProjectManager(int id, std::string name, int worktime, Job* project, int people);
    float payment();
};

class SeniorManager : public ProjectManager { //- руководитель направления.
public:
    SeniorManager(int id, std::string name, int worktime, Job* project, int people);
    float payment();
};



#endif //TASK1_EMPLOYEE_H
