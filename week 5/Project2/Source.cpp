#include <iostream>
#include <exception>
#include <fstream>

int main() {
	std::ifstream if_stream;
	if_stream.open("source.cpp");
	if_stream.seekg(0, std::ios::end);
	long loc = if_stream.tellg();
	std::cout << loc;
	if_stream.close();
}

