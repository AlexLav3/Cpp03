#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("joker");

    clap.attack("second");
    clap.beRepaired(20);
    clap.takeDamage(10);
    clap.attack("third");
    clap.takeDamage(20);
    clap.attack("second");
    
    return 0;
}