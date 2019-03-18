#pragma once
#include <iostream>
#include <string> 
using namespace std;


class WorkTime
{
protected:
	virtual double pay_per_hour() = 0;
};


class Heading
{
protected:
	virtual double pay_for_staff() = 0;
};

struct PROJECT
{
	string project_name;
	double project_payment;
};

 extern PROJECT project[3] = { { "blockchain", 5000 },
							 { "frontend", 7000 },
							 { "backend", 9000 } };

 PROJECT * whichproject(string pro_name)
 {
	 for (auto i = 0; i < 3; i++)
	 {
		 if (project[i].project_name == pro_name)
		 {
			 return &project[i];
		 }
	 }
 }

class Project
{
protected:
	virtual double pay_for_project() = 0;
};