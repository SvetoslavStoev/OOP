#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"
class Square:public Shape
{
public:
	Shape* copy(Square& other) {
		sideLength = other.sideLength;
		label = other.getLabel();
		return this;
	}
	void print() override {
		std::cout << " ___\n";
		std::cout << "|   |\n";
		std::cout << "|___|";
	}
	double getPerimeter() override{

		return sideLength * 4;
	}
	Square() {
		sideLength = 0;
	}
	Square(double side) {
		sideLength = side;
	}
private:
	double sideLength;
};
#endif