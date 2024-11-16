#include "ClapTrap.hpp"

int main()
{
	ClapTrap pikachu("Pikachu");
	ClapTrap mewtwo("Mewtwo");

	pikachu.attack("Mewtwo");
	mewtwo.takeDamage(0);
	mewtwo.beRepaired(10);
	return 0;
}