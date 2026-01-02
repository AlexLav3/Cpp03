#include "Scavtrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    std::cout << "ScavTrap " << this->name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->name <<  " Deconstructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy.name){
	std::cout << "ScavTrap copy constructor called" << std::endl; 
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDmg = other.attackDmg;
	}
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << this->name << " ScavTrap is now in Gate keeper mode" << std::endl;
}

const char* ScavTrap::typeName() const
{
	return "ScavTrap";
}

// void ScavTrap::attack(const std::string &target)
// {
// 	if(this->hitPoints == 0 || this->energyPoints == 0){
//         std::cout << "ScavTrap " << this->name << " has no hit points left :(" << std::endl;
//         return ; 
//     }
//     this->energyPoints -= 1;
//     std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDmg << " points of damage!" << std::endl;
// }