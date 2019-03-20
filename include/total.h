#include "base.h"
#include "engineer.h"
#include "manager.h"
#include "personnel.h"

void parse_staff(std::string filename, std::vector<Employee*> &vec) {
	std::ifstream fin;
	fin.open(filename);
	if (fin.is_open()) {
		std::shared_ptr<Employee> shptr;
		std::string tmp, name, pos;
		int id, salary, projects;
		while (fin >> tmp) {
			if (tmp == "{") {
				fin >> tmp;
				id = std::stoi(tmp);
				fin >> name;
				fin >> tmp;
				name += " ";
				name += tmp;
				fin >> pos;
				fin >> tmp;
				salary = std::stoi(tmp);
				projects = 0;
				fin >> tmp;
				while (tmp != "}"){
					projects++;
					fin >> tmp;
				}
				if (pos == "C") {
					vec.emplace_back(new Cleaner(id, name, salary));
				} else if (pos == "D") {
					vec.emplace_back(new Driver(id, name, salary));
				} else if (pos == "P") {
					vec.emplace_back(new Programmer(id, name, salary, projects));
				} else if (pos == "T") {
					vec.emplace_back(new Tester(id, name, salary, projects));
				} else if (pos == "TL") {
					vec.emplace_back(new TeamLeader(id, name, salary, projects));
				} else if (pos == "PM") {
					vec.emplace_back(new ProjectManager(id, name, salary, projects));
				} else if (pos == "SM") {
					vec.emplace_back(new SeniorManager(id, name, salary, projects));
				}
			}
		}
		fin.close();
	}
	else
	{
		std::cout << "file not opened" << std::endl;
	}
}

template<class Base> bool isinstanceof(Employee *&employee) {
	return typeid(Base) == typeid(*employee);
}

enum POSITIONS { CLEANER, DRIVER, PROGRAMMER, TESTER, TEAMLEADER, PROJECTMANAGER, SENIORMANAGER };

POSITIONS get_class(Employee *&employee) {
	if (isinstanceof<Cleaner>(employee)) {
		return CLEANER;
	}
	else if (isinstanceof<Driver>(employee)) {
		return DRIVER;
	}
	else if (isinstanceof<Programmer>(employee)) {
		return PROGRAMMER;
	}
	else if (isinstanceof<Tester>(employee)) {
		return TESTER;
	}
	else if (isinstanceof<TeamLeader>(employee)) {
		return TEAMLEADER;
	}
	else if (isinstanceof<ProjectManager>(employee)) {
		return PROJECTMANAGER;
	}
	else if (isinstanceof<SeniorManager>(employee)) {
		return SENIORMANAGER;
	}
	else {
		throw; //?
	}
}

void work_n_hours(int n, std::vector<Employee*> &vec) {
	for (Employee *&employee : vec) {
		switch (get_class(employee))
		{
		case CLEANER:
			((Personnel*)employee)->calculate_work_pay(n);
			break;
		case DRIVER:
			((Personnel*)employee)->calculate_work_pay(n);
			break;
		case PROGRAMMER:
			((Engineer*)employee)->calculate_work_pay(n);
			((Engineer*)employee)->calculate_share();
			break;
		case TESTER:
			((Engineer*)employee)->calculate_work_pay(n);
			((Engineer*)employee)->calculate_share();
			break;
		case TEAMLEADER:
			((TeamLeader*)employee)->calculate_work_pay(n);
			((TeamLeader*)employee)->calculate_share();
			((TeamLeader*)employee)->calculate_head();
			break;
		case PROJECTMANAGER:
			((ProjectManager*)employee)->calculate_share();
			((ProjectManager*)employee)->calculate_head();
			break;
		case SENIORMANAGER:
			((ProjectManager*)employee)->calculate_share();
			((ProjectManager*)employee)->calculate_head();
			break;
		default:
			break;
		}
	}
}

void console_output(std::vector<Employee*> &vec) {
	for (Employee *&employee : vec) {
		std::cout << "id: " << employee->get_id() << std::endl;
		std::cout << "name: " << employee->get_name() << std::endl;
		switch (get_class(employee))
		{
		case CLEANER:
			std::cout << "position: cleaner, wage: " << ((Personnel*)employee)->get_wage() << std::endl;
			break;
		case DRIVER:
			std::cout << "position: driver, wage: " << ((Personnel*)employee)->get_wage() << std::endl;
			break;
		case PROGRAMMER:
			std::cout << "position: programmer, salary: " << ((Engineer*)employee)->get_salary() << ", projects involved: " << ((Engineer*)employee)->get_projects() << std::endl;
			break;
		case TESTER:
			std::cout << "position: tester, salary: " << ((Engineer*)employee)->get_salary() << ", projects involved: " << ((Engineer*)employee)->get_projects() << std::endl;
			break;
		case TEAMLEADER:
			std::cout << "position: team leader, salary: " << ((Engineer*)employee)->get_salary() << ", projects involved: " << ((Engineer*)employee)->get_projects() << std::endl;
			break;
		case PROJECTMANAGER:
			std::cout << "position: project manager, share: " << ((Manager*)employee)->get_share() << ", projects involved: " << ((Manager*)employee)->get_projects() << std::endl;
			break;
		case SENIORMANAGER:
			std::cout << "position: senior manager, share: " << ((Manager*)employee)->get_share() << ", projects involved: " << ((Manager*)employee)->get_projects() << std::endl;
			break;
		default:
			break;
		}
		std::cout << "working hours: " << employee->get_worktime() << ", total payment: " << employee->get_payment() << std::endl;
		std::cout << std::endl;
	}
}
