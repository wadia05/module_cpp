#include "FragTrap.hpp"

void testConstructors() {
    std::cout << "\n=== Testing Constructors ===" << std::endl;
    
    // Test default constructor
    FragTrap ft1;
    
    // Test named constructor
    FragTrap ft2("Robot");
    
    // Test copy constructor
    FragTrap ft3(ft2);
    
    // Test assignment operator
    FragTrap ft4;
    ft4 = ft2;
}

void testValidCombat() {
    std::cout << "\n=== Testing Valid Combat Scenarios ===" << std::endl;
    
    FragTrap ft("Warrior");
    
    // Test regular attack
    ft.attack("Enemy");
    
    // Test taking small damage
    ft.takeDamage(20);
    
    // Test repair
    ft.beRepaired(10);
    
    // Test high fives
    ft.highFivesGuys();
}

void testEnergyDepletion() {
    std::cout << "\n=== Testing Energy Depletion ===" << std::endl;
    
    FragTrap ft("Tired");
    
    // Deplete energy by attacking 50 times (FragTrap has 100 energy points)
    std::cout << "Depleting energy through attacks..." << std::endl;
    for (int i = 0; i < 101; i++) {
        ft.attack("Target");
    }
    
    // Try to attack with no energy
    std::cout << "\nTrying to attack with no energy:" << std::endl;
    ft.attack("Target");
    
    // Try to repair with no energy
    std::cout << "\nTrying to repair with no energy:" << std::endl;
    ft.beRepaired(10);
}

void testHealthDepletion() {
    std::cout << "\n=== Testing Health Depletion ===" << std::endl;
    
    FragTrap ft("Mortal");
    
    // Deal fatal damage (FragTrap has 100 HP)
    std::cout << "Taking fatal damage:" << std::endl;
    ft.takeDamage(100);
    
    // Try to attack when dead
    std::cout << "\nTrying to attack when defeated:" << std::endl;
    ft.attack("Target");
    
    // Try to repair when dead
    std::cout << "\nTrying to repair when defeated:" << std::endl;
    ft.beRepaired(10);
    
    // Try high fives when dead
    std::cout << "\nTrying high fives when defeated:" << std::endl;
    ft.highFivesGuys();
}

void testEdgeCases() {
    std::cout << "\n=== Testing Edge Cases ===" << std::endl;
    
    FragTrap ft("Edge");
    
    // Test excessive damage
    std::cout << "Testing excessive damage:" << std::endl;
    ft.takeDamage(200);  // More than max HP
    
    // Test excessive repair
    std::cout << "\nTesting excessive repair:" << std::endl;
    ft.beRepaired(1000);
    
    // Test zero damage
    std::cout << "\nTesting zero damage:" << std::endl;
    ft.takeDamage(0);
    
    // Test zero repair
    std::cout << "\nTesting zero repair:" << std::endl;
    ft.beRepaired(0);
}

int main() {
    // Test all scenarios
    testConstructors();
    testValidCombat();
    testEnergyDepletion();
    testHealthDepletion();
    testEdgeCases();
    
    std::cout << "\n=== Testing Destructor Chain ===" << std::endl;
    {
        FragTrap ft("Temporary");
        ft.highFivesGuys();
        // Will be destroyed when scope ends
    }
    
    return 0;
}