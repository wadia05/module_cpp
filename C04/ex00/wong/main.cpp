#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
     Animal *meta = new Animal();
     Animal *j = new Dog();
     Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    meta->makeSound();
    j->makeSound(); // will output the cat sound! j->makeSound();
    std::cout << "type of animal >> " + j->getType() << std::endl;
    // meta->makeSound();
    delete meta;
    delete j;
    delete i;

    // Animal m;
    // Dog d;
    // Cat c;

    return 0;
}