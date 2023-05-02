#include "Animal.h"
#include <cstring>

Animal::Animal() {
	name = nullptr;
	age = 0;
}
Animal::Animal(char* name_, unsigned age_) {
	name = new char[strlen(name_)+1];
	for (size_t i = 0; i < strlen(name_)+1; i++)
	{
		name[i] = name_[i];
	}
	age = age_;
}
Animal::~Animal() {
	delete[] name;
	age = 0;
}
Animal::Animal(Animal& other) {
	name = new char[strlen(other.name)+1];
	for (size_t i = 0; i < strlen(other.name)+1; i++)
	{
		name[i] = other.name[i];
	}
	age = other.age;
}
 Animal& Animal::operator=(Animal& other) {
	if (this!=&other)
	{
		name = new char[strlen(other.name)+1];
		for (size_t i = 0; i < strlen(other.name)+1; i++)
		{
			name[i] = other.name[i];
		}
		age = other.age;
	}
	return *this;
}
void Animal::changeName(char* name_) {
	delete[] name;
	name = new char[strlen(name_)+1];
	for (size_t i = 0; i < strlen(name_)+1; i++)
	{
		name[i] = name_[i];
	}
}