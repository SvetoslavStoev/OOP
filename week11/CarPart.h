#ifndef CARPART_H
#define CARPART_H
#include <iostream>
class CarPart
{
public:
	CarPart(std::string name_, std::string manufacturer_, int year_, int id_) {
	name = name_;
	manufacturer = manufacturer_;
	year = year_;
	id = id_;
	}
	CarPart() {}
	virtual  ~CarPart() {
		
	}
	virtual void display() {

	}
protected:
	std::string name;
	std::string manufacturer;
	int year;
	int id;
	static int count;
};
#endif // !CARPART_H
