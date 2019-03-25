#pragma once

class WorkTime {
private:
	int WTsalary;
public:
	int getWTsalary(int base, int worktime) {
		WTsalary = base * worktime;
		return WTsalary;
	}
};