#pragma once
#include<string>

class Heading {
private:
	float Hsalary;
public:
	float getHsalary(int inferior) {
		Hsalary = inferior * 5000;
		return Hsalary;
	}
};
