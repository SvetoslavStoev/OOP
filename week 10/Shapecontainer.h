#ifndef SHAPE_CONTAINER_H
#define SHAPE_CONTAINER_H
#include <vector>
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"
class ShapeContainer
{
public:
	void addShape(Shape shape) {
		shapes.push_back(shape);
	}
	void printInfo() {
		for (size_t i = 0; i < shapes.size(); i++)
		{
			std::cout << shapes[i].getLabel() << "-" << shapes[i].getPerimeter();
		}
	}
	void printShapes() {
		for (size_t i = 0; i < shapes.size(); i++)
		{
			shapes[i].print();
		}
	}

private:
	std::vector<Shape> shapes;
};

#endif // !SHAPE_CONTAINER_H
