#include "ClapTrap.hpp"

int main() {
    // Create ClapTrap instances
    ClapTrap clap1("CT-1");
    ClapTrap clap2("CT-2");
    
    // Test the functionality
    clap1.attack("Target-1");
    clap1.takeDamage(5);
    clap1.beRepaired(3);
    
    // Test copy constructor
    ClapTrap clap3(clap1);
    clap3.attack("Target-2");
    
    // Test assignment operator
    clap2 = clap1;
    clap2.attack("Target-3");
    
    // Test energy points depletion
    for (int i = 0; i < 10; i++) {
        clap1.attack("Target-4");
    }
    // Should fail due to no energy points
    clap1.attack("Target-5");
    
    return 0;
}