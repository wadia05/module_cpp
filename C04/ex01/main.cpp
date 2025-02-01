
// File: main.cpp
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    const int animalCount = 10;
    const Animal* animals[animalCount];

    // Fill half with Dogs and half with Cats
    for (int i = 0; i < animalCount / 2; i++) {
        animals[i] = new Dog();
    }
    for (int i = animalCount / 2; i < animalCount; i++) {
        animals[i] = new Cat();
    }
    
    // Cleanup and test destructors

    for (int i = 0; i < animalCount; i++) {
        animals[i]->makeSound();
    }
    for (int i = 0; i < animalCount; i++) {
        delete animals[i];
    }

    // // Test deep copy
    // Cat cat1;
    // cat1.makeSound();
    // cat1.setIdea(0,"i hate dog");
    // cat1.setIdea(1,"dog is boring");
    // cat1.setIdea(2,"and dog hate me ");
    // cat1.makeSound();


    // Dog dog1;
    // dog1.makeSound();
    // dog1.setIdea(0, "i hate cat");
    // Dog dog2 = dog1; // Test copy constructor
    // dog2.makeSound();
    // std::cout << dog1.getIdea(0) << std::endl;
    // std::cout << dog2.getIdea(0)<< std::endl;
    // std::cout << cat1.getIdea(0) << std::endl;
    // std::cout << cat1.getIdea(1) << std::endl;
    // std::cout << cat1.getIdea(2) << std::endl;

    return 0;
}
