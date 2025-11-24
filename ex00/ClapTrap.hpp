#pragma once
#include <iostream>
#include <string>
#include <cctype> 

/* private: 
Name, which is passed as a parameter to the constructor
• Hit points (10), representing the health of the ClapTrap
• Energy points (10)
• Attack damage (0)
*/
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