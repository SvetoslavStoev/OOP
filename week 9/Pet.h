#ifndef PET_H
#define PET_H
#include <vector>
#include <iostream>
#include "Animal.h"
class Pet:public Animal
{
public:
	Pet();
	~Pet();
	Pet(Pet& other);
	Pet& operator=(Pet& other);
	void print();
	void changeOwner(char* ownerName_,unsigned phoneNumber_);
private:
	char* ownerName;
	unsigned phoneNumber[10];
};


#endif
