#include <iostream>
#include <easyfind.h>

void leaks() {
	std::cout << std::endl << "-------------------[ leaks test ]-------------------" << std::endl;
	system("leaks template"); }

int main() {


//	atexit(leaks);
	return 0;
}
