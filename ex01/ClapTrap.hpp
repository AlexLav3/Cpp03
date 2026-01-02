#pragma once
#include <iostream>
#include <string>
#include <cctype> 

class ClapTrap
{
    private: 

    protected:
    std::string name; 
    int hitPoints; 
    int energyPoints;
    int attackDmg;

    virtual const char* typeName() const; //not required by subject but I think it's better. 

    public: 
    ClapTrap();
    ClapTrap(std::string name);
    virtual ~ClapTrap();
    ClapTrap(const ClapTrap &copy);
    ClapTrap& operator= (const ClapTrap& other);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};