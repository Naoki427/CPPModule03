#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <climits>
class ClapTrap
{
protected:
	std::string name;
	unsigned int	hit_points;
	unsigned int	energy_points;
	unsigned int	attack_damage;
public:
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &origin);
	ClapTrap& operator = (const ClapTrap &origin);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif