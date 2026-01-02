#pragma once
#include <iostream>
#include <string>
#include <cctype> 

class ClapTrap
{
    private:
    std::string name; 
    int hitPoints; //Aka XP
    int energyPoints;
    int attackDmg;

    public: 
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &copy);
    ClapTrap& operator= (const ClapTrap& other);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};