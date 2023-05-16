#ifndef TIRE_H
#define TIRE_H
#include"CarPart.h"
class Tire:public CarPart
{
public:
	Tire() {
		width = 0;
		profile = 0;
		diameter = 0;
		count++;
		name = '\0';
		manufacturer = '\0';
		year = 0;
		id = 0;
	}
	Tire(int width_, int profile_, int diameter_, std::string name_, std::string manufacturer_, int year_, int id_):CarPart( name_,  manufacturer_,  year_,  id_) {
		width = width_;
		profile = profile_;
		diameter = diameter_;
		name = name_;
		manufacturer_ = manufacturer_;
		year = year_;
		id = id_;
		count++;
	}
	 void display() override {
		 std::cout << width << ' ' << profile << ' ' << diameter << ' ' << name << ' ' << manufacturer << ' ' << year << ' ' << id<<'\n';
	}
private:
	int width;
	int profile;
	int diameter;
};
#endif