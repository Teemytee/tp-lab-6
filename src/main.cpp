#include <utility>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


#include <personal.h>



int main() {
    std::vector<Employee *> list;
    std::vector<Job *> projects;

    std::string s;


    int id;
    std::string name;
    int buget;


    std::ifstream projectsIfstream("projects.txt");
    while (std::getline(projectsIfstream, s)) {
        std::stringstream ss(s);

        ss >> id;
        ss >> name;
        ss >> buget;

        projects.push_back(new Job(id, name, buget));
    }


    std::ifstream ifstream("employees.txt");


    std::string position;
    int worktime;
    int base;
    int project;
    int people;
    while (std::getline(ifstream, s)) {
        std::stringstream ss(s);

        ss >> id;
        ss >> name;
        ss >> worktime;

        ss >> position;


        if (position == "Personal") {
            ss >> base;
            list.push_back(new Personal(id, name, worktime, base));

            continue;
        }

        if (position == "Cleaner") {
            ss >> base;
            list.push_back(new Cleaner(id, name, worktime, base));

            continue;
        }

        if (position == "Driver") {
            ss >> base;
            list.push_back(new Driver(id, name, worktime, base));

            continue;
        }

        if (position == "Engineer") {
            ss >> base;
            ss >> project;

            Job *iter = nullptr;
            for (auto i : projects)
                if (i->id == project) {
                    iter = i;
                    i->worktime += worktime;
                }

            list.push_back(new Engineer(id, name, worktime, base, iter));

            continue;
        }

        if (position == "Tester") {
            ss >> base;
            ss >> project;

            Job *iter = nullptr;
            for (auto i : projects)
                if (i->id == project) {
                    iter = i;
                    i->worktime += worktime;
                }

            list.push_back(new Tester(id, name, worktime, base, iter));

            continue;
        }

        if (position == "Programmer") {
            ss >> base;
            ss >> project;

            Job *iter = nullptr;
            for (auto i : projects)
                if (i->id == project) {
                    iter = i;
                    i->worktime += worktime;
                }

            list.push_back(new Programmer(id, name, worktime, base, iter));

            continue;
        }

        if (position == "TeamLeader") {
            ss >> base;
            ss >> project;
            ss >> people;

            Job *iter = nullptr;
            for (auto i : projects)
                if (i->id == project) {
                    iter = i;
                    i->worktime += worktime;
                }

            list.push_back(new TeamLeader(id, name, worktime, base, iter, people));

            continue;
        }

        if (position == "Manager") {
            ss >> project;

            Job *iter = nullptr;
            for (auto i : projects)
                if (i->id == project) {
                    iter = i;
                    i->worktime += worktime;
                }

            list.push_back(new Manager(id, name, worktime, iter));

            continue;
        }

        if (position == "ProjectManager") {
            ss >> project;
            ss >> people;

            Job *iter = nullptr;
            for (auto i : projects)
                if (i->id == project) {
                    iter = i;
                    i->worktime += worktime;
                }

            list.push_back(new ProjectManager(id, name, worktime, iter, people));

            continue;
        }

        if (position == "SeniorManager") {
            ss >> project;
            ss >> people;

            Job *iter = nullptr;
            for (auto i : projects)
                if (i->id == project) {
                    iter = i;
                    i->worktime += worktime;
                }

            list.push_back(new SeniorManager(id, name, worktime, iter, people));

            continue;
        }

    }

    int sum = 0;
    for (auto i : list) {
        //int tmp = i->payment();
        std::cout << i->id << " " << i->name << " " << i->worktime << " " << i->payment() << std::endl;
        sum += i->payment();
    }

    std::cout << sum;


    return 0;
}