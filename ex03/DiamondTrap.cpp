#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name) {
	std::cout << "DiamondTrap " << this->name << " has been assembled! Ready for action!" << std::endl;
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
}
DiamondTrap::DiamondTrap(const DiamondTrap &origin) : ClapTrap(origin), ScavTrap(origin), FragTrap(origin) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = origin;
}
DiamondTrap::~DiamondTrap() {
		std::cout << "DiamondTrap " << this->name << " has been dismantled. Farewell!" << std::endl;
}
DiamondTrap& DiamondTrap::operator= (const DiamondTrap &origin) {
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if(this == &origin)
		return *this;
	this->name = origin.name;
	ClapTrap::name = (this->name + "_clap_name");
	this->hit_points = origin.hit_points;
	this->energy_points = origin.energy_points;
	this->attack_damage = origin.attack_damage;
	return *this;
}
void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
void DiamondTrap::whoAmI() {
	std::cout << "I am ..." << std::endl;
	std::cout << "DiamondTrap: " << name << std::endl;
	std::cout << "ClapTrap   : " << ClapTrap::name << std::endl;
}