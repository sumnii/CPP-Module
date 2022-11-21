#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"

int main() {
	Animal *dog = new Dog();
	Animal *cat = new Cat();
	Animal *animals[4];

	std::cout << std::endl;
	for (size_t i = 0; i < (sizeof(animals) / sizeof(*animals)); ++i) {
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << std::endl;
	dog->getBrain().setIdeas(0, "dog's brain");
	std::cout << dog->getBrain().getIdeas(0) << std::endl;
	Animal *dog2(dog);
	std::cout << dog2->getBrain().getIdeas(0) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	delete(dog);
	delete(cat);
	std::cout << std::endl;
	for (size_t i = 0; i < (sizeof(animals) / sizeof(*animals)); ++i)
		delete animals[i];
}
