#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: name(name), hitPoints(100), energyPoints(50), attackDmg(20){
	std::cout << "ClapTrap " << this->name <<" contructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << this->name << " Desconstructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: name(other.name),
		hitPoints(other.hitPoints),
		energyPoints(other.energyPoints),
		attackDmg(other.attackDmg){
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDmg = other.attackDmg;
	}
	return (*this);
}

const char *ClapTrap::typeName() const
{
    return "ClapTrap";
}

void ClapTrap::attack(const std::string &target){
    if(this->hitPoints == 0 || this->energyPoints == 0){
        std::cout << typeName() << " "<< this->name << " has no hit points left :(" << std::endl;
        return ; 
    }
    this->energyPoints -= 1;
    std::cout << typeName() << " " << this->name << " attacks " << target << ", causing " << this->attackDmg << " points of damage!" << std::endl;
}

// void ClapTrap::attack(const std::string &target){
//     if(this->hitPoints == 0 || this->energyPoints == 0){
//         std::cout << "Claptrap " << this->name << " has no hit points left :(" << std::endl;
//         return ; 
//     }
//     this->energyPoints -= 1;
//     std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDmg << " points of damage!" << std::endl;
// }

void ClapTrap::takeDamage(unsigned int amount){
    this->hitPoints -= amount; 
    std::cout << "ClapTrap " << this->name << " looses " << amount << ", hit points, total:" << this->hitPoints<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(this->hitPoints == 0 || this->energyPoints == 0){
        std::cout << "Claptrap " << this->name << " has no hit points left :(" << std::endl;
        return ; 
    }
    this->hitPoints += amount; 
    this->energyPoints -=1;
    std::cout << "ClapTrap " << this->name << " gains " << amount << ", hit points, total:"<< this->hitPoints << std::endl;
}

