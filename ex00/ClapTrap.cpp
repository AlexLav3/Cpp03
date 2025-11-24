#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: name(name), hitPoints(10), energyPoints(10), attackDmg(0){
	//std::cout << "Default contructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
	//std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: name(other.name),
		hitPoints(other.hitPoints),
		energyPoints(other.energyPoints),
		attackDmg(other.attackDmg){
	//std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDmg = other.attackDmg;
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target){

}

void ClapTrap::takeDamage(unsigned int amount){

}

void ClapTrap::beRepaired(unsigned int amount){
    
}
