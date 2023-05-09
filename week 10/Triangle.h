#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"
class Triangle:public Shape
{
public:
	Shape* copy(Triangle& other) {
		side1Length = other.side1Length;
		side2Length = other.side2Length;
		side3Length = other.side3Length;
		label = other.getLabel();
		return this;
	}

	void print() override {
		std::cout << " /\\n";
		std::cout << "/__\\";
	}
	double getPerimeter() override {

		return side1Length +side2Length+side3Length;
	}
	Triangle() {
		side1Length = 0;
		side2Length = 0;
		side3Length = 0;
	}				
	Triangle(double side1, double side2, double side3) {
		side1Length = side1;
		side2Length = side2;
		side3Length = side3;
	}
private:
	double side1Length;
	double side2Length;
	double side3Length;
};
#endif // !TRIANGLE_H
