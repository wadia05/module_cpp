#include "PhoneBook.hpp"

#include <iostream>
#include <string>
#include <iomanip>

std::string GetSubInput(std::string &input)
{
    if(input.length() > 10)
    {
        return input.substr(0,9) + ".";
    }
      return input;
}

void PhoneBook::PrintAllContact()
{
    int i = 0;
        std::cout << "|"<< std::setw(10) << std::left << "Index" << "|"
          << std::setw(10) << std::left << "First Name" << "|"
          << std::setw(10) << std::left << "Last Name" << "|"
          << std::setw(10) << std::left << "Nickname" << "|"
          << std::endl;
        std::cout << std::string(55, '-') << std::endl;
    while(i < 8)
    {   
        if (cnt[i].is_valide()) {
            // std::cout << i << std::endl;
            cnt[i].print_contact(i);
        }
        i++;
    }
}


