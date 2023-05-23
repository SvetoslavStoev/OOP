#ifndef PERSON_H
#define PERSON_H
#include "BasePerson.h"
#include <iostream>
class Person:public BasePerson {
public:
	Person(int id_, const std::string& name_) {
		id = id_;
		name = name_;
		}
	~Person() {
		id = 0;
		name = '\0';
	}
	Person(const Person& other) {
		name = other.name;
		id = other.id;
	}
	Person& operator=(const Person& other) {
		if (this != &other) {
			name = other.name;
			id = other.id;
		}
		return *this;
	}
	int getId() {
		return id;
	}
	std::string getName() {
		return name;
	}
private:
	int id;
	std::string name;
};

#endif