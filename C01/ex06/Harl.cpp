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
void  Harl::FolterComplain(std::string level)
{
    int index = -1;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING","ERROR"};
    while (++index < 4)
    {
        if (levels[index] == level)
            break;
    }
    switch (index)
    {
        case 0:
            this->debug();
            this->FolterComplain("INFO");
            break;
        case 1:
            this->info();
            this->FolterComplain("WARNING");
            break;
        case 2:
            this->warning();
            this->FolterComplain("ERROR");
            break;
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    } 
}
