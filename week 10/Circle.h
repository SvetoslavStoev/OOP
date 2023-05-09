#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
class Circle:public Shape
{
public:
	Shape* copy(Circle& other) {
		radiusLength = other.radiusLength;
		label = other.getLabel();
		return this;
	}

	void print() override {
		std::cout << "   _\n";
		std::cout << " /   \\\n";
		std::cout << "|     |\n";
		std::cout << " \\ _ /";
	}
	double getPerimeter() override {

		return 2*3.14 * radiusLength;
	}
	Circle() {
		radiusLength = 0;
	}
	Circle(double radius) {
		radiusLength = radius;
	}
private:
	double radiusLength;
};

#endif
