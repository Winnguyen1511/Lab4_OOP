#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
private:
	float lenght, width;
public:
	Rectangle();
	Rectangle(float, float);
	virtual float area();
	virtual float perimeter();
	~Rectangle();
};

