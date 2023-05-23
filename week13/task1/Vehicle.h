#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
public:
	Vehicle() {
		power = 0;
		weight = 0;
	}
	Vehicle(const Vehicle& other) {
		power = other.power;
		weight = other.weight;
	}
	Vehicle& operator=(const Vehicle& other) {
		if (this != &other) {
			power = other.power;
			weight = other.weight;
		}
		return *this;
	}
	Vehicle(int power_,int weight_) {
		power = power_;
		weight = weight_;
	}
	virtual ~Vehicle() {}
	virtual void startEngine() {}
	int getPower() {
		return power;
	}
	int getWeight() {
		return weight;
	}
private:
	int power;
	int weight;
		
};

#endif