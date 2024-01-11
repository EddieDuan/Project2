#include <iostream>
#include "Log.h"

#define LOG(x) std::cout << x <<std::endl

int main()
{
	char* buffer = new char[8];
	memset(buffer,0,8);

	std::cin.get();
}