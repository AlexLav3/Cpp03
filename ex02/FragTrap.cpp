#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap " << this->name << " constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDmg = 30;
}


FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->name <<  " Deconstructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy.name){
	std::cout << "FragTrap copy constructor called" << std::endl; 
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDmg = other.attackDmg;
	}
	return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << this->name << " Wants to high five!" << std::endl;
}