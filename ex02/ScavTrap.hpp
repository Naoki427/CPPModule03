#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP
#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
private:
	bool guarding_gate;
public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap &origin);
	ScavTrap& operator = (const ScavTrap &origin);
	void guardGate();
	void attack(const std::string& target);
};


#endif