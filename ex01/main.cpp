#include "ClapTrap.hpp"
#include "Scavtrap.hpp"

int main()
{
    ClapTrap clap("joker");

    ScavTrap Scav("pops");

    clap.attack("first");
    //clap.beRepaired(20);
    //clap.takeDamage(10);
    Scav.attack("second");
    //Scav.takeDamage(20);
    //Scav.attack("second");
    //Scav.guardGate();
    return 0;
}