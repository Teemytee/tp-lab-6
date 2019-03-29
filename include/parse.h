//
// Created by maksi on 23.03.2019.
//

#ifndef LAB6_PARSE_H
#define LAB6_PARSE_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "Tester.h"
#include "Cleaner.h"
#include "Driver.h"
#include "Programmer.h"
#include "TeamLeader.h"
#include "ProjectManager.h"
#include "SeniorManager.h"


using namespace std;

vector<Employee*> parse(){

    enum Prof{_Tester, _Cleaner, _Driver, _Programmer,
            _TeamLeader, _ProjectManager, _SeniorManager};

    ifstream file("..//workers.txt");
    string line;
    string word;
    int n;
    vector<string> Wvec;
    Prof curr;
    vector<Employee*> e;


    if (file.is_open()) {
        while (getline(file, line)) {
            istringstream iss(line, istringstream::in);
            while (iss >> word)
                Wvec.push_back(word); 

            if (Wvec[3] == "Tester")
                curr = _Tester;
            else if (Wvec[3] == "Driver")
                curr = _Driver;
            else if (Wvec[3] == "Cleaner")
                curr = _Cleaner;
            else if (Wvec[3] == "Programmer")
                curr = _Programmer;
            else if (Wvec[3] == "TeamLeader")
                curr = _TeamLeader;
            else if (Wvec[3] == "ProjectManager")
                curr = _ProjectManager;
            else if (Wvec[3] == "SeniorManager")
                curr = _SeniorManager;

        switch(curr) {
            case _Tester:
                e.push_back(new Tester(stoi(Wvec[0]), Wvec[1] + ' '+ Wvec[2], stoi(Wvec[4]), Wvec[6], stoi(Wvec[5]),
                                       stod(Wvec[8]), stoi(Wvec[7])));
                n = e.size()-1;
                (e[n])->setPayment();
                break;
            case _Cleaner:
                e.push_back(new Cleaner(stoi(Wvec[0]), Wvec[1] + ' '+ Wvec[2], stoi(Wvec[4]), stoi(Wvec[5])));
                break;
            case _Driver:
                e.push_back(new Driver(stoi(Wvec[0]), Wvec[1] + ' '+ Wvec[2], stoi(Wvec[4]), stoi(Wvec[5])));
                break;
            case _Programmer:
                e.push_back(new Programmer(stoi(Wvec[0]), Wvec[1] + ' '+ Wvec[2], stoi(Wvec[4]), Wvec[6], stoi(Wvec[5]),
                                       stod(Wvec[8]), stoi(Wvec[7])));
                break;


            case _TeamLeader:
                e.push_back(new TeamLeader(stoi(Wvec[0]), Wvec[1] + ' '+ Wvec[2], stoi(Wvec[4]), Wvec[6], stoi(Wvec[5]),
                                           stod(Wvec[8]), stoi(Wvec[7]), stoi(Wvec[9])));
                break;

            case _ProjectManager:
                e.push_back(new ProjectManager(stoi(Wvec[0]), Wvec[1] + ' '+ Wvec[2], Wvec[4],
                             stoi(Wvec[5]), stod(Wvec[6]), stoi(Wvec[7]) ));
                break;

            case _SeniorManager:
                e.push_back(new SeniorManager(stoi(Wvec[0]), Wvec[1] + ' '+ Wvec[2], Wvec[4], stoi(Wvec[5]),
                                              stod(Wvec[6]), stoi(Wvec[7])));
                break;

            default:
                break;
        }
        Wvec.clear();
    }

    }

    return e;
}

#endif //LAB6_PARSE_H
