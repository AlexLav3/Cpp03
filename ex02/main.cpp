#include "ClapTrap.hpp"
#include "Scavtrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("joker");

    ScavTrap Scav("pops");
    FragTrap Frag("Froggie");
    Frag.highFivesGuys();
    Frag.attack("pops");
    return 0;
}