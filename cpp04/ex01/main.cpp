#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"
#include "unistd.h"

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
	dog->getBrain().setIdeas(0, "original dog's brain");
	std::cout << "original[0] : " << dog->getBrain().getIdeas(0) << std::endl;
	Animal *deep_copy_dog = new Dog();
	std::cout << "copy dog[0] : " << deep_copy_dog->getBrain().getIdeas(0) << std::endl;
	*deep_copy_dog = *dog;
	std::cout << "copy dog[0] : " << deep_copy_dog->getBrain().getIdeas(0) << std::endl;
	std::cout << std::endl;
	cat->getBrain().setIdeas(3, "original cat's brain");
	std::cout << "original[3] : " << cat->getBrain().getIdeas(3) << std::endl;
	Animal *deep_copy_cat = new Cat();
	*deep_copy_cat = *cat;
	std::cout << "copy cat[3] : " << deep_copy_cat->getBrain().getIdeas(3) << std::endl;
	std::cout << std::endl;

	delete(dog);
	delete(deep_copy_dog);
	delete(cat);
	delete(deep_copy_cat);
	std::cout << std::endl;
	for (size_t i = 0; i < (sizeof(animals) / sizeof(*animals)); ++i)
		delete animals[i];
//	while (1) {
//		system("leaks animal");
//		sleep(10);
//	}
}
