#pragma once
#include <iostream>
using namespace std;
class Employee
{
protected:
	string name;
	int age;
	float hourRate;
public:
	Employee();
	Employee(string,int,float);
	~Employee();
	virtual float salary(float) = 0;
	void display(void);
};

