#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n=== Testing ScavTrap ===\n" << std::endl;
    
    // Create ScavTrap instances
    ScavTrap scav1("ST-1");
    ScavTrap scav2("ST-2");
    
    std::cout << "\n=== Testing basic functionality ===\n" << std::endl;
    
    scav1.attack("Target-1");
    scav1.takeDamage(30);
    scav1.beRepaired(20);
    scav1.guardGate();
    
    std::cout << "\n=== Testing copy constructor ===\n" << std::endl;
    
    ScavTrap scav3(scav1);
    scav3.attack("Target-2");
    
    std::cout << "\n=== Testing assignment operator ===\n" << std::endl;
    
    scav2 = scav1;
    scav2.attack("Target-3");
    
    std::cout << "\n=== Testing energy points depletion ===\n" << std::endl;
    
    // ScavTrap has 50 energy points, let's use them all
    for (int i = 0; i < 51; i++) {
        scav1.attack("Target-4");
    }
    
    std::cout << "\n=== Testing hit points depletion ===\n" << std::endl;
    
    scav2.takeDamage(150);  // More than max HP
    scav2.attack("Target-5");  // Should fail
    scav2.beRepaired(50);   // Should fail
    scav2.guardGate();      // Should still work
    
    std::cout << "\n=== End of tests ===\n" << std::endl;
    
    return 0;
}