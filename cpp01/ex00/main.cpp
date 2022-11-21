#include "Zombie.h"

int main(void) {
	Zombie *foo;
	Zombie *halo;

	foo = newZombie("Foo");
	foo->Announce();
	randomChump("Ola");
	halo = newZombie("HALO");
	halo->Announce();
	randomChump("Random");
	delete foo;
	delete halo;
}
