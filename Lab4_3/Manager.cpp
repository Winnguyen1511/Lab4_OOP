#include "Manager.h"


Manager::Manager()
{
	this->name = "";
	this->age = 0;
	this->hourRate = 0;
}
Manager::Manager(string name, int age, float hourRate):Employee(name,age,hourRate)
{

}
float Manager::salary(float hour)
{
	return hour * this->hourRate* 2.0;
}

Manager::~Manager()
{
}
