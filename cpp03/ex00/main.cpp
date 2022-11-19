#include "ClapTrap.h"

int main() {
	ClapTrap tmp;
	ClapTrap one = ClapTrap("ONE");
	ClapTrap two = ClapTrap("TWO");
	ClapTrap three = ClapTrap("THREE");

	std::cout << std::endl;
	one.attack("TWO");
	two.takeDamage(5);
	std::cout << std::endl;

	two.attack("ONE");
	one.takeDamage(10);
	std::cout << std::endl;

	one.attack("TWO");
	one.beRepaired(5);
	std::cout << std::endl;

	two.beRepaired(5);
	two.attack("THREE");
	three.takeDamage(10);
	std::cout << std::endl;
}