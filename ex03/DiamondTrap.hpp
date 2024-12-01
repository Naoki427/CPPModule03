#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
private:
	std::string name;
public:
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &origin);
	~DiamondTrap();
	DiamondTrap& operator = (const DiamondTrap &origin);
	void attack(const std::string& target);
	void whoAmI();
};

#endif