#ifndef TIRE_H
#define TIRE_H
#include"CarPart.h"
#include <vector>
#include"Piston.h"
class Engine :public CarPart
{
public:
	Engine() {
		power = 0;
		count++;
		name = '\0';
		manufacturer = '\0';
		year = 0;
		id = 0;
	}
	Engine(int power_,std::vector<Piston>pistons_, std::string name_, std::string manufacturer_, int year_, int id_):pistons(pistons_),CarPart( name_,  manufacturer_,  year_,  id_) {
		power = power_;
		name = name_;
		manufacturer = manufacturer_;
		year = year_;
		id = id_;
		count++;
	}
	void display() override {
		std::cout << power << ' ' << name << ' ' << manufacturer << ' ' << year << ' ' << id << '\n';
		for (int i = 0; i < pistons.size(); i++)
		{
			pistons[i].display();
		}
	}
private:
	int power;
	std::vector<Piston> pistons;
};
#endif