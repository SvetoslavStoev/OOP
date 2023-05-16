#ifndef CAR_H
#define CAR_H
#include"FuelTank.h"
#include"Engine.h"
#include "Tire.h"
#include "Piston.h"
class Car{
public:
	void displayParts();
	Car() {
		brand = '\0';
		type = '\0';
		parts = nullptr;
	}
	Car(std::string brand_,
	std::string type_
	) {
		brand = brand_;
		type = type_;
	}
	void addCarPart(const CarPart& part) {
		if (partCount>=size) {
			size *= 2;
			CarPart * temp = new CarPart[size];
			for (size_t i = 0; i < partCount; i++)
			{
				temp[i] = parts[i];
			}
			delete parts;
			parts = temp;
			
		
		}
		parts[partCount] = part;
		partCount++;
	}
	~Car() {
		delete[] parts;
		parts = nullptr;
	}
private:

	std::string brand;
	std::string type;
	CarPart* parts;
	int size = 5;
	int partCount = 0;
};

#endif // !CAR_H

