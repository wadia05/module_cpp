#include <iostream>
#include <string>

int main() {
    std::string name = "HI THIS IS BRAIN";
    std::string* stringPTR =  &name;
    std::string& stringREF = name;

    std::cout << &name << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << name << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return 0;
}
