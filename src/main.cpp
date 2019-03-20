#include <cstdlib>
#include <iostream>

#include <total.h>

int main()
{
	std::vector<Employee*> employees;
	parse_staff("C:\\Users\\magin\\Documents\\Repositories\\tp-lab-6\\src\\staff.txt", employees);
	//std::cout << isinstanceof<SeniorManager>(employees[0]) << std::endl;
	work_n_hours(5, employees);
	console_output(employees);
	file_output("C:\\Users\\magin\\Documents\\Repositories\\tp-lab-6\\src\\output.txt", employees);
	system("pause");
	return 0;
}
