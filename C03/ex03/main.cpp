#include "DiamondTrap.hpp"

int main()
{
    std::cout << "\n=== Testing DiamondTrap ===" << std::endl;
    
    // Test default constructor
    DiamondTrap d1;
    
    // Test named constructor
    DiamondTrap d2("Diamond");
    
    // Test copy constructor
    DiamondTrap d3(d2);
    
    // Test member functions
    d2.attack("target");  // Should use ScavTrap's attack
    d2.whoAmI();         // Should show both names
    d2.guardGate();      // From ScavTrap
    d2.highFivesGuys();  // From FragTrap
    
    // Test taking damage and repair
    d2.takeDamage(30);
    d2.beRepaired(20);
    
    return 0;
}