#ifndef FUELTANK_H
#define FUELTANK_H
#include"CarPart.h"
template<typename T1>
class Tire :public CarPart
{
public:
	Tire() {
		volume = 0;
		fueltype = nullptr;
		count++;
		name = '\0';
		manufaturer = '\0';
		year = 0;
		id = 0;
	}
	Tire(int volume_,T1 fueltype_, std::string name_, std::string manufacturer_, int year_, int id_):CarPart(name_, manufacturer_, year_, id_) {
		volume = volume_;
		fueltype = fueltype_;
		name = name_;
		manufacturer = manufacturer_;
		year = year_;
		id = id_;
		count++;
	}
	void display() override {
		std::cout << volume << ' ' << fueltype << ' ' <<  ' ' << name << ' ' << manufacturer << ' ' << year << ' ' << id << '\n';
	}
private:
	int volume;
	T1 fueltype;
};
#endif