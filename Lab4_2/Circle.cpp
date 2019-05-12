#include "Circle.h"



Circle::Circle()
{
	this->radius = 0;
}
Circle::Circle(float radius)
{
	this->radius = radius;
}
float Circle::area()
{
	return pi * radius* radius;
}
float Circle::perimeter()
{
	return 2 * pi* radius;
}
Circle::~Circle()
{
}
