#pragma once
class WorkTime
{
public:
	WorkTime() {}
	virtual int CalculateWorkTime(int worktime, int base) = 0;
	~WorkTime() {}
};