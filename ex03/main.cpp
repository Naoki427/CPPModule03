#include "DiamondTrap.hpp"

int main()
{
	//default constructor
	DiamondTrap pikachu("Pikachu");
	DiamondTrap mewtwo("Mewtwo");
	//copy constructor
	DiamondTrap metamon(pikachu);

	std::cout << std::endl;

	//attack
	metamon.attack("Mewtwo");
	//takeDmage
	mewtwo.takeDamage(30);
	//beRapaired
	mewtwo.beRepaired(10);

	std::cout << std::endl;
	//whoAmI
	pikachu.whoAmI();

	std::cout << std::endl;
	return 0;
}