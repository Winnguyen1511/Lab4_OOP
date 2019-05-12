#pragma once
class Shape
{
public:
	Shape();
	~Shape();
	virtual float area() = 0;
	virtual float perimeter() = 0;
};

