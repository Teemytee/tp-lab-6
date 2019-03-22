//
// Created by Александр Славутин on 2019-03-22.
//

#include "Employee.h"
#include "Engineer.h"


int main(){
    Engineer first(1,"Slavutin Alex",8,500,project_belong("OpenVino"),what_grade(3));
    cout<<first.GetName();
    return 0;
}