#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <stdbool.h>
#include <iostream>
#include <string>
#include <iomanip>
void InputPhoneBook()
{
    std::cout << "*_________ PHONE BOOK _________*" << std::endl;
    std::cout << "ADD --> save a new contact\nSEARCH --> display a specific contact\nEXIT --> exit phone book" << std::endl;
    std::cout << "Enter here ::"; 

}
int main (void)
{
    PhoneBook book;
    std::string input;
    bool look = true;
    while (look)
    {   InputPhoneBook();
        std::getline(std::cin, input);

        //ctrl+D check
        if(std::cin.eof())
        {
            std::cout << "End of input reached.\n";
            break;
        }
        if("ADD" == input || "1" == input)
        {
            book.AddContact();
            std::cout << "Add" << std::endl;
        }
        else if("SEARCH" == input || "2" == input)
        {
            book.PrintAllContact();
            std::cout << "SEARCH" << std::endl; 
        }
        else if("EXIT" == input)
            look = false;
    }
    std::cout << "GOOD BYE LOVE U" << std::endl; 
}