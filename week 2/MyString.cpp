#include "MyString.h"
#include <cstring>
#include <iostream>

void MyString::copy(const MyString& other)
{
	size = other.size;
	str = new char[size];
	for (int i = 0; i < size; i++)
	{
		str[i] = other.str[i];
	}
}

void MyString::erase() {
	delete[] str;
}

MyString::MyString(const char* str) {
	size = strlen(str);
	this->str = new char[size];
	for (int i = 0; i < size; i++)
	{
		this->str[i] = str[i];
	}
}

MyString::~MyString() {
	erase();
}

void MyString::print() {
	for (int i = 0; i < size; i++)
	{
		std::cout << str[i];
	}
}