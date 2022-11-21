#include "FragTrap.h"

int main() {
	ClapTrap clap("CLAP");
	std::cout << std::endl;

	ScavTrap scav("SCAV");
	std::cout << std::endl;

	FragTrap tmp;
	std::cout << std::endl;

	FragTrap frag("FRAG");
	std::cout << std::endl;
	std::cout << std::endl;


	scav.attack("FLAG");
	frag.takeDamage(20);
	std::cout << std::endl;

	frag.attack("SCAV");
	scav.takeDamage(30);
	std::cout << std::endl;

	frag.beRepaired(10);
	frag.highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;
}