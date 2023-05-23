#ifndef PROPERTY_H
#define PROPERTY_H
#include <iostream>

class Property
{
public:
	Property(const Property& other) {
		owner = other.owner;
		tangible = other.tangible;
	}
	Property& operator=(const Property& other) {
		if (this != &other) {
			owner = other.owner;
			tangible = other.tangible;
		}
		return *this;
	}

	Property() {
		tangible = 0;
		owner = '\0';
	}

	Property(std::string owner_,bool tangible_){
		owner = owner_;
		tangible_ = tangible_;
	 }
	std::string getOwner() {
		return owner;
	}
	bool getTangible() {
		return tangible;
	}
private:
	std::string owner;
	bool tangible;
};
#endif