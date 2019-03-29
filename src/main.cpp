#include "Cleaner.h"
#include "Driver.h"
#include "Programmer.h"
#include "Tester.h"
#include "ProjectManager.h"
#include "TeamLeader.h"
#include "SeniorManager.h"
#include <fstream>
#include <sstream>

class Project;

void add_project_main(std::vector<Project*>& proj_vector, std::string proj, Employee * new_employee)
{
  for (unsigned int i = 0; i < proj_vector.size(); i++)
  {
    if (proj_vector[i]->return_title() == proj)
    {
      proj_vector[i]->add_member(new_employee);//this function checks if a project already exists
      return;                                  //and creates new one if not
    }                                          //then adds employee to a project
  }
  Project * new_proj = new Project(proj, 100000);
  new_proj->add_member(new_employee);
  proj_vector.push_back(new_proj);
}

int main()
{
  std::vector<Employee*> staff;
  std::vector<Project*> all_projects;
  std::string path_to_data = "../data/data.txt";
  std::ifstream fin(path_to_data);
  if (!fin.is_open())
  {
    std::cout << "error open\n";
    return 1;
  }
  std::string buf;
  //std::string buf2;
  std::string name;
  std::string surname;
  std::string pos;
  std::string hour_pay;
  std::string _project;
  Employee * new_employee;
  //Project * new_project;
  //std::string test_vector = "abra";
  //ProjectManager * test_emp = new ProjectManager(test_vector);
  //add_project_main(all_projects, test_vector, test_emp);
  //add_project_main(all_projects, test_vector+"abra", test_emp);
  //std::cout << all_projects.size() << "\n";
  while (fin >> name)//reading data from file
  {
    fin >> surname;
    fin >> pos;
    if (pos == "Cleaner")
    {
      fin >> hour_pay;
      new_employee = new Cleaner(name+" "+surname, std::stoi(hour_pay));
      staff.push_back(new_employee);
    }
    else if (pos == "Driver")
    {
      fin >> hour_pay;
      new_employee = new Driver(name+" "+surname, std::stoi(hour_pay));
      staff.push_back(new_employee);
    }
    else if (pos == "Programmer")
    {
      fin >> hour_pay;
      fin >> _project;
      new_employee = new Programmer(name+" "+surname, std::stoi(hour_pay));
      staff.push_back(new_employee);
      add_project_main(all_projects, _project, new_employee);
    }
    else if (pos == "Tester")
    {
      fin >> hour_pay;
      fin >> _project;
      new_employee = new Tester(name+" "+surname, std::stoi(hour_pay));
      staff.push_back(new_employee);
      add_project_main(all_projects, _project, new_employee);
    }
    else if (pos == "TeamLeader")
    {
      fin >> hour_pay;
      fin >> _project;
      new_employee = new TeamLeader(name+" "+surname, std::stoi(hour_pay));
      staff.push_back(new_employee);
      add_project_main(all_projects, _project, new_employee);
    }
    else if (pos == "ProjectManager")
    {
      fin >> _project;
      new_employee = new ProjectManager(name+" "+surname);
      staff.push_back(new_employee);
      add_project_main(all_projects, _project, new_employee);
    }
    else if (pos == "SeniorManager")
    {
      fin >> _project;
      new_employee = new SeniorManager(name+" "+surname);
      staff.push_back(new_employee);
      add_project_main(all_projects, _project, new_employee);
      fin >> _project;
      add_project_main(all_projects, _project, new_employee);
    }
  }
  //std::cout << all_projects.size() << "\n";
  for (unsigned int i = 0; i < staff.size(); i++)//add worktime, pay salary and data output
  {
    if ((staff[i]->return_position() != "ProjectManager") && (staff[i]->return_position() != "SeniorManager"))
    {
      staff[i]->work(100);
    }
    staff[i]->pay_salary();
    std::cout << staff[i]->return_id() << ")";
    std::cout << staff[i]->return_fio() << " ";
    std::cout << staff[i]->return_position() << " ";
    std::cout << staff[i]->return_salary() << "\n";
  }
  return 0;
}
