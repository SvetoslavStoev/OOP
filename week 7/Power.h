#ifndef _Power_HPP
#define _Power_HPP
#include <iostream>
#include<cstring>
class Power
{
private:
	std::string name;
	int damage;
public:
	Power(const std::string& name, int damage);
	int getDamage() const;
	const std::string& getName();
	bool operator<(const Power& other);
};
#endif 
