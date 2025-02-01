#include "Animal.hpp"
#include "Cat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *i = new Cat();
    std::cout << i->getType() << " " << std::endl;
    meta->makeSound();
    i->makeSound();
    delete meta;
    delete i;

    return 0;
}