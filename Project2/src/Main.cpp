#include <iostream>
#include "Log.h"

#define LOG(x) std::cout << x <<std::endl

int main()
{
	int var = 8;
	int* ptr = &var;
	
	while (*ptr != -1)
	{
		std::cin >> *ptr;
		LOG(*ptr);
	}

	std::cin.get();
}