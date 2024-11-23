#include <iostream>

int main (int ac, char **av)
{
    int i;
    int j;

    j = 0;
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }
    while (ac > ++j)
    {
        i = -1;
        while (av[j][++i] != '\0')
            std::cout << (char)std::toupper(av[j][i]);
        std::cout << " ";
    }
    std::cout << std::endl;
    return 0;   
}