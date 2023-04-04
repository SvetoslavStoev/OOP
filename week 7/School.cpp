#include "School.h"
void School::clear() {
	delete[] students;
	capacity = 0;
	currentCount = 0;
}
void School::copy(const School& other) {
	currentCount = other.currentCount;
	capacity = other.capacity;
	this->students = new Student [capacity];
	for (size_t i = 0; i < currentCount; i++)
	{
		this->students[i] = other.students[i];
	}
}
void School::addStudent(const Student& student) {
	if (capacity == currentCount + 1) {
		if (capacity != 0) {
			capacity *= 2;
		}
		else
		{
			capacity = 2;
		}
	}
	Student* copy = new Student[capacity];
	for (size_t i = 0; i < currentCount; i++)
	{
		copy[i] = students[i];
	}
	delete this->students;
	this->students = copy;
	students[currentCount++] = student;
}