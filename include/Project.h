#pragma once
class Project
{
public:
	Project() {}
	virtual int ProjectPayment(int budget, double contribution) = 0;
	~Project() {}
};
