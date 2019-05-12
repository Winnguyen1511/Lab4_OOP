#pragma once
#include "Shape.h"
#include <corecrt_math_defines.h>
#define		pi		M_PI
class Circle :
	public Shape
{
private:
	float radius;
public:
	Circle();
	Circle(float);
	virtual float area();
	virtual float perimeter();
	~Circle();
};

