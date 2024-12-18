#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

void Contact::SetData()
{
    IsValideIpout("Enter FristName :: ", FristName);
    IsValideIpout("Enter LastName :: ", LastName);
    IsValideIpout("Enter NickName :: ", NickName);
    IsValideIpout("Enter Number Phone :: ", NbPhone);
    IsValideIpout("Enter Deep Secret :: ", Secret);
    IsActive = true;
}

void Contact::print_contact(int i)
{
    std::cout << "|" << std::setw(10) << std::right << i << "|"
              << std::setw(10) << std::right << GetSubInput(FristName) << "|"
              << std::setw(10) << std::right << GetSubInput(LastName) << "|"
              << std::setw(10) << std::right << GetSubInput(NickName) << "|"
              << std::endl;
}
void Contact::InedexContactPrint()
{
    std::cout << std::string(15, '-') << std::endl;
    std::cout << "FristName : " << FristName << std::endl;
    std::cout << "LastName : " << LastName << std::endl;
    std::cout << "NickName : " << NickName << std::endl;
    std::cout << "Number Phone : " << NbPhone << std::endl;
    std::cout << "deep Secret : " << Secret << std::endl;
    std::cout << std::string(15, '-') << std::endl;
}

void Contact::IsValideIpout(const std::string &prompt, std::string &input)
{
    do
    {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cout << "End of input reached.\n";
            break;
        }
        if (input.empty())
            std::cout << "Input cannot be empty. Please try again.\n";
    } while (input.empty());
}