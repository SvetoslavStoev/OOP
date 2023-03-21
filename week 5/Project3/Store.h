#ifndef _STORE_HPP
#define _STORE_HPP
#include <string>
struct shoe
{
	std::string producer;
	std::string brand;
	double price;
	double rating;
	int numberOfPairs;
};

class warehouse
{
public:
	warehouse(const int capacity);
	~warehouse();
	warehouse& operator=(const warehouse& other);
	warehouse(const warehouse& other);
private:
	shoe* shoes;
	 int capacity;
};


#endif
