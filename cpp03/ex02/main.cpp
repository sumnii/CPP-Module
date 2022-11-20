#include "FragTrap.h"

int main() {
	ClapTrap tmp;
	std::cout << std::endl;

	ClapTrap clap("CLAP");
	std::cout << std::endl;

	ScavTrap tmp2;
	std::cout << std::endl;

	FragTrap tmp3;
	std::cout << std::endl;

	ScavTrap scav("SCAV");
	std::cout << std::endl;

	ScavTrap scav_cp(scav);
	std::cout << std::endl;
	std::cout << std::endl;

	scav_cp.attack("CLAP");
	clap.takeDamage(20);
	std::cout << std::endl;

	scav.attack("SCAV_CP");
	scav_cp.takeDamage(20);
	std::cout << std::endl;

	scav_cp.beRepaired(10);
	scav.guardGate();
	std::cout << std::endl;
	std::cout << std::endl;
}