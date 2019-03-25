#ifndef EMPLOYEEFACTORY_H
#define EMPLOYEEFACTORY_H

#include "interface.Project.h"
#include "Employee.h"
#include <fstream>
#include "Cleaner.h"
#include "Driver.h"
#include "Programmer.h"
#include "Tester.h"
#include "TeamLeader.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
#include <algorithm>

PROJECT find_project(std::string name){
    for (auto p: PROJECTS)
        if (p.project_name == name)
            return p;
}

std::vector<std::string> split(const std::string &s, char delim){
    std::stringstream ss(s);
    std::string item;
    std::vector<std::string> elems;
    while (std::getline(ss, item, delim)) {
      elems.push_back(item);
    }
    return elems;
}

class EmployeeFactory {
public:
    EmployeeFactory(){}
    ~EmployeeFactory(){}
    void creator(){
        std::vector <Employee*> Employees;
        std::ifstream input_file("D:/qt-proj/tp_6/employees.txt");

        std::string line;
        if (input_file.is_open()){
                while(getline(input_file, line)){
                    std::vector<std::string> results;
                    results = split(line, ' ');
                    if (std::find(results.begin(), results.end(), "Cleaner") != results.end()){
                        Cleaner *c = new Cleaner(stoi(results[0]), results[1] + " " + results[2] + " " + results[3], stof(results[5]), stof(results[6]));
                        Employees.push_back(c);
                    }
                    if (std::find(results.begin(), results.end(), "Driver") != results.end()){
                        Driver *d = new Driver(stoi(results[0]), results[1] + " " + results[2] + " " + results[3], stof(results[5]), stof(results[6]));
                        Employees.push_back(d);
                    }
                    if (std::find(results.begin(), results.end(), "Programmer") != results.end()){
                        Programmer *p = new Programmer(stoi(results[0]), results[1] + " " + results[2] + " " + results[3], stof(results[5]), stof(results[7]), stof(results[8]), find_project(results[6]));
                        Employees.push_back(p);
                    }
                    if (std::find(results.begin(), results.end(), "Tester") != results.end()){
                        Tester *t = new Tester(stoi(results[0]), results[1] + " " + results[2] + " " + results[3], stof(results[5]), stof(results[7]), stof(results[8]), find_project(results[6]));
                        Employees.push_back(t);
                    }
                    if (std::find(results.begin(), results.end(), "TeamLeader") != results.end()){
                        TeamLeader *tl = new TeamLeader(stoi(results[0]), results[1] + " " + results[2] + " " + results[3], stof(results[5]), stof(results[7]), stof(results[8]), find_project(results[6]), stoi(results[9]));
                        Employees.push_back(tl);
                    }
                    if (std::find(results.begin(), results.end(), "ProjectManager") != results.end()){
                        ProjectManager *pm = new ProjectManager(stoi(results[0]), results[1] + " " + results[2] + " " + results[3], stof(results[6]), find_project(results[5]), stoi(results[7]));
                        Employees.push_back(pm);
                    }
                    if (std::find(results.begin(), results.end(), "SeniorManager") != results.end()){
                        SeniorManager *sm = new SeniorManager(stoi(results[0]), results[1] + " " + results[2] + " " + results[3], stof(results[6]), find_project(results[5]), stoi(results[7]), stof(results[8]));
                        Employees.push_back(sm);
                    }
                }
        }else{
             std::cout<<"err";
        }

        for(auto x: Employees){
            std::cout<<x->get_id()<<" "<<x->get_name()<<" "<<int(x->get_payment())<<std::endl;
        }
    }
};


#endif // EMPLOYEEFACTORY_H
