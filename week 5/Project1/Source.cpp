#include <iostream>
#include <exception>
#include <fstream>

int main() {
	std::ifstream if_stream;
	if_stream.open("source.cpp");

	const int buffer_size = 1024;
	char line[buffer_size];
	while (if_stream.getline(line,buffer_size))
	{
		std::cout << line << '\n';
	}

	if_stream.close();
}