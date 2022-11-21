#include "Dog.h"

int main() {
	Animal ani;
	Dog dog;

	std::cout << std::endl;
	std::cout << ani.getType() << std::endl;
	ani.makeSound();
	std::cout << dog.getType() << std::endl;
	dog.makeSound();
	std::cout << std::endl;
}
