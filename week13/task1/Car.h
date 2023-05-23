#ifndef CAR_H
#define CAR_H
#include"Vehicle.h"
#include"Property.h"

class Car:public Vehicle,Property {
public:
	Car(char* modelBrand_,std::string owner_,bool tangible_,int power_,int weight_):modelBrand(modelBrand_),Property( owner_,  tangible_),Vehicle( power_,  weight_){
		
	}
	~Car() {
		delete[] modelBrand;
		modelBrand = nullptr;
	}
	Car(const Car& other):Vehicle(other),Property(other) {
		char* temp = new char[strlen(other.modelBrand)+1];
		for (size_t i = 0; i < strlen(other.modelBrand) + 1; i++)
		{
			temp[i] = other.modelBrand[i];
		}
		delete[]modelBrand;
		modelBrand = new char[strlen(other.modelBrand) + 1];
		modelBrand = temp;
	}
	Car& operator=(const Car& other) {
		if (this != &other) {
			Property::operator=(other);
			Vehicle::operator=(other);
			char* temp = new char[strlen(other.modelBrand) + 1];
			for (size_t i = 0; i < strlen(other.modelBrand) + 1; i++)
			{
				temp[i] = other.modelBrand[i];
			}
			delete[]modelBrand;
			modelBrand = new char[strlen(other.modelBrand) + 1];
			modelBrand = temp;
		}
		return *this;
	}

	virtual void startEngine() {
		std::cout << "Vr";
		for (size_t i = 0; i < getPower()/30; i++)
		{
			std::cout << "o";
		}
		std::cout << "m"<<'\n';
	}
private:
	char* modelBrand;
};

#endif