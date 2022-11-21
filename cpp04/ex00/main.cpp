#include "Dog.h"
#include "Cat.h"

int main() {
	Animal ani;
	Dog dog;
	Cat cat;

	std::cout << std::endl;
	std::cout << ani.getType() << std::endl;
	ani.makeSound();
	std::cout << dog.getType() << std::endl;
	dog.makeSound();
	std::cout << cat.getType() << std::endl;
	cat.makeSound();
	std::cout << std::endl;
}
