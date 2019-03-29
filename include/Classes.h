#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/////interfaces//////////

class WorkTime {		//расчет оплаты исходя из отработанного времени(часы умножаются на ставку).
public: 
	virtual ~WorkTime() {};
	virtual void salW() = 0;
};

class Project {		//расчет оплаты исходя из участия в проекте(бюджет проекта делится пропорционально персональному вкладу).
public:
	virtual ~Project() {};
	virtual void salP() = 0;
};

class Heading {		//расчет оплаты исходя из руководства(количество подчиненных).
public:
	virtual ~Heading() {};
	virtual void salH() = 0;
};

class Employee {		//работник.Основной родительский класс для всех разновидностей работников.
protected:
	int id;
	string name;		//FIO
	int worktime=0;		//отработанное время (hours).
	int payment=0;		//заработная плата.
	int numproj=0;		//number of projects
public:
	Employee(int, string);
	int getId();
	string getName();
	int getWorktime();
	int getNumproj();
	virtual int getSal() = 0;
};

class Personal : public Employee, public WorkTime {			//работник по найму с оплатой за фактически отработанное время.Имеет ставку за час.
public:
	Personal(int, string, int);
};

class Cleaner : public Personal {			//уборщица.
public:
	Cleaner(int idS, string nameS, int worktimeS) : Personal(idS, nameS, worktimeS){};
	void salW();
	int getSal();
};

class Driver : public Personal {		//водитель.
public:
	Driver(int idS, string nameS, int worktimeS) : Personal(idS, nameS, worktimeS) {};
	void salW();
	int getSal();
};

class Engineer : public Employee, public WorkTime, public Project {		// -инженер.Имеет ставку и оплату за час + бонусы от выполняемого проекта.
protected:
	int paym1, paym2;
public:
	Engineer(int, string, int, int);
	int getpaym1();
	int getpaym2();
};

class Programmer : public Engineer {		//инженер - программист.
public:
	Programmer(int idS, string nameS, int worktimeS, int numprojS) : Engineer(idS, nameS, worktimeS, numprojS) {};
	void salW();
	void salP();
	int getSal();
};

class Tester : public Engineer {		//инженер по тестированию.
public:
	Tester(int idS, string nameS, int worktimeS, int numprojS) : Engineer(idS, nameS, worktimeS, numprojS) {};
	void salW();
	void salP();
	int getSal();
};

class TeamLeader : public Programmer, public Heading {		//ведущий программист.
public:
	TeamLeader(int idS, string nameS, int worktimeS, int numprojS) : Programmer(idS, nameS, worktimeS, numprojS) {};
	void salH();
	int getSal();
};		

class Manager : public Employee, public Project {		//менеджер.Оплату получает из денег проекта, которым руководит.
protected:
	int paym1;
public:
	Manager(int, string, int);
	void salP();
	int getSal();
};

class ProjectManager : public Manager, public Heading {		//проектный менеджер.
protected:
	int paym2;
public:
	ProjectManager(int idS, string nameS, int numprojS) : Manager(idS, nameS, numprojS) {};
	void salH();
	int getSal();
};

class SeniorManager : public ProjectManager {		//руководитель направления.
public:
	SeniorManager(int idS, string nameS, int numprojS) : ProjectManager(idS, nameS, numprojS) {};
	void sumSal();
	int getSal();
};

