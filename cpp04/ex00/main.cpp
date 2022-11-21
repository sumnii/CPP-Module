#include "Animal.h"

int main() {
	Animal ani1;
	Animal ani2(ani1);

	ani1.makeSound();
	ani2.makeSound();
	std::cout << ani1.getType() << std::endl;
	std::cout << ani2.getType() << std::endl;
}
