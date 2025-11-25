#include "ClapTrap.hpp"


class ScavTrap: public ClapTrap
{
    private: 

    public:
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap &copy);
    ScavTrap& operator= (const ScavTrap& other);

    void guardGate();
};