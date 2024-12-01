#include "ClapTrap.hpp"

int main()
{
	//default constructor
	ClapTrap pikachu("Pikachu");
	ClapTrap mewtwo("Mewtwo");
	//copy constructor
	ClapTrap metamon(pikachu);

	std::cout << std::endl;

	//attack
	metamon.attack("Mewtwo");
	//takeDmage
	mewtwo.takeDamage(0);
	//beRapaired
	mewtwo.beRepaired(10);

	std::cout << std::endl;

	//action with no hit point
	mewtwo.takeDamage(20);
	mewtwo.beRepaired(10);
	mewtwo.attack("Pikachu");

	std::cout << std::endl;

	//overflow
	pikachu.beRepaired(UINT_MAX);

	std::cout << std::endl;
	return 0;
}