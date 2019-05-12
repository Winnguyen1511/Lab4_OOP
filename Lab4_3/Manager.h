#pragma once
#include "Employee.h"
class Manager :
	public Employee
{
private:

public:
	Manager();
	Manager(string, int,float);
	~Manager();
	virtual float salary(float);
};

