#ifndef PISTON_H
#define PISTON_H
#include"CarPart.h"
class Piston :public CarPart
{
public:
	Piston() {
		hod = 0;
		diameter = 0;
		count++;
		name = '\0';
		manufacturer = '\0';
		year = 0;
		id = 0;
	}
	Piston(int hod_, int diameter_, std::string name_, std::string manufacturer_, int year_, int id_) :CarPart(name_, manufacturer_, year_, id_) {
		hod=hod_;
		diameter = diameter_;
		name = name_;
		manufacturer = manufacturer_;
		year = year_;
		id = id_;
		count++;
	}
	void display() override {
		std::cout << hod << ' ' << ' ' << diameter << ' ' << name << ' ' << manufacturer << ' ' << year << ' ' << id << '\n';
	}
private:
	int diameter;
	int hod;
};
#endif
