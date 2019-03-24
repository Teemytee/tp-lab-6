#include "Employee.h"
#include "Cleaner.h"
#include "Driver.h"
#include "Engineer.h"
#include "Programmer.h"
#include "Tester.h"
#include "Manager.h"
#include "ProjectManager.h"
#include "TeamLeader.h"
#include "SeniorManager.h"
#include <vector>
#include <iostream>
#include<random>
#include<string>
#include<fstream>
using namespace std;


int main() {


    ifstream file("/Users/artemaroslankin/Documents/Progacpp/lab6/student.txt");
    vector<Employee*> employee;
    int id;

    while(file >> id) {
        string name, surname;
        file >> name >> surname;
        string position;
        file >> position;
        if (position == "Tester") {
            string project_name;
            double base, worktime;
            file >> worktime >> base;
            file >> project_name;
            double budget, rate;
            file >> budget >> rate;
            employee.push_back(new Tester(id,name+" "+surname,worktime,base,project_name,budget,rate));
        }
        if(position=="Manager"){
            string project_name;
            file >> project_name;
            double budget, rate;
            file >> budget>> rate;
            employee.push_back(new Manager(id,name + " " + surname,project_name,budget,rate));


        }
        if(position=="Programmer"){
            string project_name;
            double base, worktime;
            file >> worktime >> base;
            file >> project_name;
            double budget, rate;
            file >> budget >> rate;
            employee.push_back(new Tester(id,name+" "+surname,worktime,base,project_name,budget,rate));


        }
        if(position=="Cleaner"){
            double base, worktime;
            file >> worktime >> base;
            employee.push_back(new Cleaner(id,name+" "+surname,worktime,base));
        }
        if(position=="Driver"){
            double base, worktime;
            file >> worktime >> base;
            employee.push_back(new Driver(id,name+" "+surname,worktime,base));
        }
        if(position=="SeniorManager"){
            double budget, rate, subordes_num,project_num;
            file >> budget >> rate >> subordes_num >> project_num;

            employee.push_back(new SeniorManager(id,name+" "+ surname, budget,rate,subordes_num,project_num));
        }
        if(position=="ProjectManager"){
            string project_name;
            int subordes_num;
            file >> project_name;
            double budget, rate;
            file >> budget>> rate>>subordes_num;
            employee.push_back(new ProjectManager(id,name + " " + surname,project_name,budget,rate,subordes_num));

        }
        if(position=="TeamLeader"){
            string project_name;
            double base, worktime;
            int subordes_num;
            file >> worktime >> base;
            file >> project_name;
            double budget, rate;
            file >> budget >> rate >> subordes_num;
            employee.push_back(new TeamLeader(id,name+" "+surname,worktime,base,project_name,budget,rate,subordes_num));

        }
    }

    for (int i = 0; i < employee.size(); ++i)
    {
        employee[i]->set_payment();
        cout << employee[i]->get_id() << "\t" << employee[i]->get_name() << "\t" << employee[i]->get_payment() << "\n";
    }

    return 0;
}