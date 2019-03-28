#pragma once
using namespace std;
#include<string>
#include<fstream>

class Employee {
protected:
	int id;
	string name;
	int worktime;
	int payment;
	string position;

public:
	Employee() {}
	
	virtual void SetPayment() = 0;


	void print() {
		ofstream file;
		file.open("result.txt",std::ios_base::in | std::ios_base::app);

		if (file.is_open())
		{
			if (worktime < 0) {//no worktime and base
				file << "---------------------------------------------------------------------\n";

				file << id << " | " << name << " | " << position << "  |   -   | " << payment << "\n";
			}
			else {
				file << "---------------------------------------------------------------------\n";
				file << id << " | " << name << " | " << position << " | " << worktime << " | " << payment << "\n";
			}
		}
		file.close();
	}
};
