#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"

void leaks() {
	std::cout << std::endl << "-------------------[ leaks test ]-------------------" << std::endl;
	system("leaks animal"); }

int main() {
	const Animal *meta = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << std::endl;
	std::cout << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << dog->getType() << std::endl;
	dog->makeSound();
	std::cout << cat->getType() << std::endl;
	cat->makeSound();
	std::cout << std::endl;

	delete(meta);
	delete(dog);
	delete(cat);

	// const WrongAnimal *w_meta = new WrongAnimal();
	// const WrongAnimal *w_cat = new WrongCat();

	// std::cout << std::endl;
	// std::cout << w_meta->getType() << std::endl;
	// w_meta->makeSound();
	// std::cout << w_cat->getType() << std::endl;
	// w_cat->makeSound();
	// std::cout << std::endl;

	// delete(w_meta);
	// delete(w_cat);

	atexit(leaks);
}
