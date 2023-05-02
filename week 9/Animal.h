#include <iostream>
#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
public:
	Animal();
	Animal(char* name_,unsigned age_);
	~Animal();
	Animal(Animal& other);
	Animal& operator=(Animal& other);
	void changeName(char* name_);
protected:
	char* name;
	unsigned age;
};


#endif // !EMPLOYEE_H
