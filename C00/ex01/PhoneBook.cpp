#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

PhoneBook::PhoneBook() : index(0) {}
std::string GetSubInput(std::string &input)
{
    if (input.length() > 10)
    {
        return input.substr(0, 9) + ".";
    }
    return input;
}

void PhoneBook::AddContact()
{
    _cnt[index].SetData();
    index = (index + 1) % 8;
}
void TableLine()
{
    int i = 0;
    std::cout << "|";
    while (i < 4)
    {
        std::cout << std::string(10, '-');
        std::cout << "|";
        i++;
    }
    std::cout << std::endl;
}

void PhoneBook::ContactIndex(const std::string &prompt)
{
    std::string input;
    std::cout << prompt;
    std::getline(std::cin, input);

    if (std::cin.eof())
    {
        std::cout << "End of input reached.\n";
        return; // Exit the function
    }

    if (input.length() == 1 && input[0] >= '0' && input[0] <= '7') // Check ASCII range
    {
        int index = input[0] - '0'; // Convert char to int
        if (_cnt[index].is_valide() == false)
            std::cout << "this contact not exesite" << std::endl;
        else
            _cnt[index].InedexContactPrint();
    }
    else
    {
        std::cout << "Wrong index. It should be between 0 - 7.\n"
                  << std::endl;
    }
}
void PhoneBook::PrintAllContact()
{
    int i = 0;
    if (_cnt[0].is_valide() == false)
    {
        std::cout << "empty list" << std::endl;
        return;
    }
    std::cout << std::string(45, '-') << std::endl;
    std::cout << "|" << std::setw(10) << std::right << "Index" << "|"
              << std::setw(10) << std::right << "First Name" << "|"
              << std::setw(10) << std::right << "Last Name" << "|"
              << std::setw(10) << std::right << "Nickname" << "|"
              << std::endl;
    // TableLine();

    while (i < 8)
    {
        if (_cnt[i].is_valide())
        {
            TableLine();
            _cnt[i].print_contact(i);
        }
        i++;
    }
    std::cout << std::string(45, '-') << std::endl;
    ContactIndex("Enter the index u want to know about it :: ");
}