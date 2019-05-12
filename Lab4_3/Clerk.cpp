#include "Clerk.h"
Clerk::Clerk()
{
	this->name = "";
	this->age = 0;
	this->hourRate = 0;
}
Clerk::Clerk(string name, int age, float rate) :Employee(name, age, rate)
{

}
float Clerk::salary(float hour)
{
	return hour * this->hourRate* 1.2;
}

Clerk::~Clerk()
{
}
