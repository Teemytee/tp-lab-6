#ifndef INTERFACE_PROJECT_H
#define INTERFACE_PROJECT_H

#include <string>
#include <vector>

struct PROJECT
{
    std::string project_name;
    float project_budget;
};

const PROJECT TBB = {"TBB", 500000.0};
const PROJECT OpenCV = {"OpenCV", 700000.0};
const PROJECT ParallelSTL = {"ParallelSTL", 900000.0};
const PROJECT PROJECTS[3] = {TBB, OpenCV, ParallelSTL};

class Project {
public:
    Project(){}
    ~Project(){}
    virtual float get_project_income(PROJECT _project, float _involvement)=0;
};


#endif // INTERFACE_PROJECT_H
