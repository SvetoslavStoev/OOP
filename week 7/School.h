#ifndef _SCHOOL_HPP
#define _SCHOOL_HPP
#include <iostream>
#include<cstring>
#include "Student.h"
class School
{
private:
	Student* students;
	size_t currentCount;
	size_t capacity;
	void clear();
	void copy(const School& other);
public:
	void addStudent(const Student& student);

};

#endif
