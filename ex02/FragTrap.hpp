#pragma once 
#include "Scavtrap.hpp"

class FragTrap : public ClapTrap
{
    private: 

    protected:

    const char* typeName() const;
    
    public:
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(const FragTrap &copy);
    FragTrap& operator= (const FragTrap& other);

    void highFivesGuys();
    //void attack(const std::string& target);
};