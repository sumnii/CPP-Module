#include "Zombie.h"

int main(void) {
	Zombie *horde;

	horde = zombieHorde(3, "Immotal");
	for (int i = 0; i < 3; ++i)
		horde[i].Announce();
	delete[] horde;
}