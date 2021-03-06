

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap&);
	FragTrap&	operator=(const FragTrap&);
	virtual	~FragTrap();
	void	highFivesGuys();
	virtual void	attack(const std::string& target);
private:
};
