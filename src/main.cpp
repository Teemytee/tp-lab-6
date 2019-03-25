#include "Cleaner.h"
#include "Driver.h"
#include "Tester.h"
#include "Personal.h"
#include "ProjectManager.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "SeniorManager.h"
#include "EmployeeFactory.h"

int main(){
    EmployeeFactory EF;
    EF.creator();
    return 0;
}

