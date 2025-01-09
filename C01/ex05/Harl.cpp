#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger";
    std::cout << " I really do!" << std::endl;
}
void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. ";
    std::cout << "You didn't put enough bacon in my burger! ";
    std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::ComplainLevel Harl::levels[4] = {
    {"DEBUG",&Harl::debug},
    {"INFO",&Harl::info},
    {"WARNING",&Harl::warning},
    {"ERROR",&Harl::debug}
};

/*

this line of code is like this
Harl::ComplaintLevel Harl::levels[4] = {
    ComplaintLevel{
        .level = "DEBUG",
        .function = &Harl::debug
    },
    ...
}
*/

void Harl::complain(std::string level)
{
    int i = -1;
    while (++i < 4)
    {
        if (Harl::levels[i].level == level)
        {
            (this->*levels[i].fonction)();
            return ;
        }
        
    }
    std::cout << "invalide level "<< std::endl;
}