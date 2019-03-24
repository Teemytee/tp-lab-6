//
// Created by Александр Славутин on 2019-03-22.
//

#include "Employee.h"
#include "Engineer.h"
#include "Programmer.h"
#include "Personal.h"
#include "Driver.h"
#include "TeamLeader.h"
#include "Tester.h"
#include "Cleaner.h"
#include "Manager.h"
#include "ProjectManager.h"
#include <vector>
#include <fstream>


int main(){
    vector <Employee* > employee_list;
    ifstream file ("/Users/AlexSlav/Shtanuk/tp-lab-6/src/employees.txt");
    if (file.is_open()){
        int id;
        while(file >> id){
            string name;
            file >> name;
            string surname;
            file>> surname;
            string position;
            file >> position;
            if (position == "Engineer"){
                int base, worktime;
                file >> worktime >>base;
                string project;
                file >>project;
                int grade;
                file >> grade;
                employee_list.push_back(new Engineer(id,name + " " + surname,worktime,base,project_belong(project),what_grade(grade)));
            } else if (position == "Cleaner") {
                int base, worktime;
                file >> worktime >>base;
                employee_list.push_back(new Cleaner(id,name + " " + surname,worktime,base));

            }
            else if (position == "Programmer") {
                int base, worktime;
                file >> worktime >>base;
                string project;
                file >>project;
                int grade;
                file >> grade;
                employee_list.push_back(new Programmer(id,name + " " + surname,worktime,base,project_belong(project),what_grade(grade)));
            }
            else if (position == "TeamLeader") {
                int base, worktime;
                file >> worktime >>base;
                string project;
                file >>project;
                int grade, vassals;
                file >> grade >> vassals;
                employee_list.push_back(new TeamLeader(id,name + " " + surname,worktime,base,project_belong(project),what_grade(grade),vassals));
            }
            else if (position == "Manager") {
                int worktime;
                file >> worktime;
                string project;
                file >>project;
                int grade;
                file >> grade;
                employee_list.push_back(new Manager(id,name + " " + surname,worktime,project_belong(project),what_grade(grade)));

            }
            else if (position == "ProjectManager") {
                int worktime;
                file >> worktime;
                string project;
                file >>project;
                int grade;
                file >> grade;
                employee_list.push_back(new ProjectManager(id,name + " " + surname,worktime,project_belong(project),what_grade(grade)));

            }
            else if (position == "SeniorManager") {
                int worktime;
                file >> worktime;
                string project;
                file >>project;
                int grade;
                file >> grade;
                employee_list.push_back(new SeniorManager(id,name + " " + surname,worktime,project_belong(project),what_grade(grade)));

            }
            else if (position == "Tester") {
                int base, worktime;
                file >> worktime >>base;
                string project;
                file >>project;
                int grade;
                file >> grade;
                employee_list.push_back(new Tester(id,name + " " + surname,worktime,base,project_belong(project),what_grade(grade)));
            }
            else if (position == "Driver") {
                int base, worktime;
                file >> worktime >>base;
                employee_list.push_back(new Driver(id,name + " " + surname,worktime,base));

            }
        }

        }

    else
        cout << "Not open!";
    //employee.push_back(new Engineer(1,"Slavutin Alex",8,500,project_belong("OpenVino"),what_grade(3)));
    //Engineer Sanya (1,"Salvutin Alex",8,500,project_belong("Internship"),what_grade(5));
    //Sanya.Payment();
    //cout << Sanya.GetPayment();
    for (auto i(0); i < employee_list.size() ; ++i) {
        employee_list[i]->Payment();
        employee_list[i]->get_info();

    }
    return 0;
}