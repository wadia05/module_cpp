#include "Bureaucrat.hpp"
// #include <iostream>

int main() {
    try {
        Bureaucrat b1("Bob", 3);
        b1.radeTooHighException();
        std::cout << b1 << std::endl;
        b1.radeTooHighException();
        std::cout << b1 << std::endl;
        b1.radeTooHighException();
        std::cout << b1 << std::endl;
        b1.radeTooHighException();
        std::cout << b1 << std::endl;
 

    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat b2("kok", 148); // This will throw an exception
        std::cout << b2 << std::endl;
        b2.radeTooLowException();
        std::cout << b2 << std::endl;
        b2.radeTooLowException();
        std::cout << b2 << std::endl;
        b2.radeTooLowException();
        std::cout << b2 << std::endl;
        b2.radeTooLowException();
    
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try {
        Bureaucrat b3("sos", 0); // This will throw an exception
        std::cout << b3 << std::endl;

    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try {
        Bureaucrat b4("DPD", 151); // This will throw an exception
        std::cout << b4 << std::endl;

    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}