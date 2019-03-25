#pragma once
using namespace std;
#include<string>


class Project {
private:
	float Psalary;
public:
	float getPsalary(int budget, float part) {
		Psalary = part * budget;
		return Psalary;
	}
};
