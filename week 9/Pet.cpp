#include "Pet.h"
Pet::Pet():Animal(){

}
Pet::~Pet() {

}
Pet::Pet(Pet& other) {

}
Pet& Pet::operator=(Pet& other) {

}
void Pet::print() {
	std::cout << "Owner name: ";
	for (size_t i = 0; i < strlen(ownerName); i++)
	{
		std::cout << ownerName[i];
	}
	std::cout << '\n';
	std::cout << "Owner phone number: ";
	if (phoneNumber[0]==0)
	{
		for (size_t i = 1; i < 10; i++)
		{
			std::cout << phoneNumber[i];
		}
	}
	else
	{
		for (size_t i = 0; i < 10; i++)
		{
			std::cout << phoneNumber[i];
		}
	}
	std::cout << "Animal name: ";

}
void Pet::changeOwner(char* ownerName_, unsigned phoneNumber_) {

}