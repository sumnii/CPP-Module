#include "Zombie.h"

int main(void) {
	Zombie *horde;
	int 	N = 5;

	horde = zombieHorde(N, "zommy");
	for (int i = 0; i < N; ++i)
		horde[i].Announce();
	delete[] horde;
}
