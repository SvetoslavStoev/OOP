#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
class Shape
{
public:
	Shape* copy()  {}
	const std::string getLabel() {
		return label;
	}
	virtual void print() {
		std::cout << label;
	}
	virtual double getPerimeter() {}

protected:
	std::string label;
};

#endif
