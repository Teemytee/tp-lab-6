//
// Created by Александр Славутин on 2019-03-22.
//

#pragma once

class IWorkTime{
protected:
    virtual float time_payment() = 0;
};

// grading system
struct GRADE {
    int grade;
    float contribution_level;
};

extern GRADE grade[5] = {{1,0.1},{2,0.15},{3,0.2},{4,0.25},{5,0.3}};

GRADE* what_grade(int gr){
    for (int i = 0; i < 5 ; ++i) {
        if(grade[i].grade == gr)
            return &grade[i];
    }
}


struct  PROJECT{
    string name_of_project;
    float budget;
};

extern PROJECT project[4] = {{"OpenVino",950000},{"MediaSDK",1000000},{"HR",670000},{"Internship",350000}};
PROJECT* project_belong(string pr_name){
    for (int i = 0; i < 4 ; ++i) {
        if(project[i].name_of_project == pr_name)
            return &project[i];
    }
}

class Project{
protected:
    virtual float project_payment() = 0;
};

class Heading{
protected:
    virtual float payment_for_people_count() = 0;
};