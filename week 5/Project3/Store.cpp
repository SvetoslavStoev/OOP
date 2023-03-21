#include <string>
#include "Store.h"
#include <iostream>
#include <fstream>
#include <string>

warehouse::warehouse(const int capacity) {
	shoes = new shoe[capacity];
}

warehouse::~warehouse() {
	delete[] shoes;
	shoes = nullptr;
}

warehouse::warehouse(const warehouse& other) {
	this->capacity = other.capacity;
	this->shoes = new shoe[other.capacity];
}

warehouse& warehouse::operator=(const warehouse& other) {
	if (this != &other) {
		this->capacity = other.capacity;
		delete[] shoes;
		this->shoes = new shoe[other.capacity];
	}
	return *this;
}
 