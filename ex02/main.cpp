#include "FragTrap.hpp"

int main()
{
	//default constructor
	FragTrap pikachu("Pikachu");
	FragTrap mewtwo("Mewtwo");
	//copy constructor
	FragTrap metamon(pikachu);

	std::cout << std::endl;

	//attack
	metamon.attack("Mewtwo");
	//takeDmage
	mewtwo.takeDamage(30);
	//beRapaired
	mewtwo.beRepaired(10);

	std::cout << std::endl;
	//hifive
	mewtwo.highFivesGuys();

	std::cout << std::endl;
	return 0;
}