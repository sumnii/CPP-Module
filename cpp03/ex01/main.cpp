#include "ScavTrap.h"

int main() {
	ClapTrap clap = ClapTrap("CLAP");
	std::cout << std::endl;

	ScavTrap scav = ScavTrap("SCAV");
	std::cout << std::endl;

	ScavTrap scav_cp(scav);
	std::cout << std::endl;
	std::cout << std::endl;

	clap.attack("SCAV");
	scav.takeDamage(0);
	std::cout << std::endl;

	scav.attack("CLAP");
	clap.takeDamage(20);
	std::cout << std::endl;

	scav.beRepaired(10);
	scav.guardGate();
	std::cout << std::endl;
	std::cout << std::endl;
}