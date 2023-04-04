#include <iostream>
#include<cstring>
#include "Power.h"

Power::Power(const std::string& name, int damage) {
	this->name = name;
	this->damage = damage;
}
int Power::getDamage() const {
	return damage;
}
const std::string& Power::getName() {
	return name;
}
bool Power::operator<(const Power& other) {
	if (damage<other.damage)
	{
		return 1;
	}
	return 0;
}
