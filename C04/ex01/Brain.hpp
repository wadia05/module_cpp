#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
// #include <iostream>
class Brain{
    protected:
        std::string _ideas[100];
    public :
        Brain();
        ~Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);

        std::string getIdea(int index) const;
        void setIdea(int index, const std::string& idea);
};

#endif