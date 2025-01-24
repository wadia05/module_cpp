#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

    private:
        Brain* _brain;
    public :
        Cat();
        ~Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);

        void makeSound();
        void setIdea(int index, std::string idea);
        std::string getIdea(int index);
        
};



#endif