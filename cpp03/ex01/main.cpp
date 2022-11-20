#include "ScavTrap.h"

int main() {
	ClapTrap tmp;
	ClapTrap one = ClapTrap("ONE");
	std::cout << std::endl;

	ScavTrap tmp2;
	ScavTrap two = ScavTrap("TWO");
	ScavTrap three(two);
	std::cout << std::endl;

	three.attack("one");

	std::cout << std::endl;
}