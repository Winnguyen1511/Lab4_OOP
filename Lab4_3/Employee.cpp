#include "Employee.h"


Employee::Employee()
{
	this->name = "";
	this->age = 0;
	this->hourRate = 0;

}
Employee::Employee(string name, int age, float rate)
{
	this->name = name;
	this->age = age;
	this->hourRate = rate;
}


Employee::~Employee()
{
}
void Employee::display(void)
{
	cout << ">Name: " << this->name << endl;
	cout << ">Age: " << this->age << endl;
	cout << ">salary: " <<this->salary(this->hourRate) << endl;
}