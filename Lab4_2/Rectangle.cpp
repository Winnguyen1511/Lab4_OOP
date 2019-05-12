#include "Rectangle.h"



Rectangle::Rectangle()
{
	this->width = this->lenght = 0;
}
Rectangle::Rectangle(float w, float l)
{
	this->width = w;
	this->lenght = l;
}
float Rectangle::area()
{
	return this->lenght* this->width;
}
float Rectangle::perimeter()
{
	return 2 * (this->lenght + this->width);
}
Rectangle::~Rectangle()

{
}
