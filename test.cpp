#include <iostream>
#include <string>

class Person {
private:
    std::string name;

public:
    // Constructor
    Person(const std::string& name) {
        // Using 'this' to disambiguate between the parameter and the class member
        this->name = name;
    }

    // Setter method
    void setName(const std::string& name) {
        this->name = name; // 'this->name' refers to the class member
    }

    // Method to display name
    void display() const {
        // Using 'this' to print the address of the current object
        std::cout << "Name: " << this->name << ", Address: " << this << std::endl;
    }
};

int main() {
    Person person1("Alice");
    Person person2("Bob");

    person1.display(); // Output: Name: Alice, Address: 0x...
    person2.display(); // Output: Name: Bob, Address: 0x...

    person1.setName("Charlie");
    person1.display(); // Output: Name: Charlie, Address: 0x...

    return 0;
}
