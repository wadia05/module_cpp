#include "Brain.hpp"


Brain::Brain () : _ideas() 
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        for(int i = 0; i < 100 ; i++)
        {
            this->_ideas[i] = other._ideas[i];
        }
        std::cout << "Brain assigned!" << std::endl;
    }
    else 
        std::cout << "YOU assignment the same Object" << std::endl;
    return *this;
}
Brain::Brain(const Brain& other)
{
    for(int i = 0; i < 100 ; i++)
    {
        this->_ideas[i] = other._ideas[i];
    }
    std::cout << "Brain copied!" << std::endl;
}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return _ideas[index];
    }
    return ""; 
}

// Setter implementation
void Brain::setIdea(int index, const std::string& idea) {
    if (index >= 0 && index < 100) {
        _ideas[index] = idea;
    }
}

// Optional: Print all ideas

