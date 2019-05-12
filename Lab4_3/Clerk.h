#pragma once
#include "Employee.h"
class Clerk :
	public Employee
{
public:
	Clerk();
	Clerk(string, int, float);
	~Clerk();
	virtual float salary(float);
};

