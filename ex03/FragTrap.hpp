#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP
#include "ClapTrap.hpp"
class FragTrap : virtual public ClapTrap
{
private:
	
public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap &origin);
	FragTrap& operator = (const FragTrap &origin);
	void highFivesGuys(void);
};


#endif