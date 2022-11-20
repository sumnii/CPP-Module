#include "ScavTrap.h"

int main() {
	ClapTrap tmp;
	std::cout << std::endl;

	ClapTrap one = ClapTrap("ONE");
	std::cout << std::endl;

	ScavTrap tmp2;
	std::cout << std::endl;

	ScavTrap two = ScavTrap("TWO");
	std::cout << std::endl;

	ScavTrap three(two);
	std::cout << std::endl;
	std::cout << std::endl;

	three.attack("one");
	one.takeDamage(20);
	std::cout << std::endl;

	two.attack("three");
	three.takeDamage(20);
	std::cout << std::endl;

	three.beRepaired(10);
	two.guardGate();
	std::cout << std::endl;
	std::cout << std::endl;
}