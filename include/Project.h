#pragma once

class Project 
{
public:
	Project() {}
	virtual int ProjectPaymentMethod(int budget, double deposit) = 0;
	~Project() {}
};