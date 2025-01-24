#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
class Character : public ICharacter
{
    private :
        // AMateria materia[4];
    public:
        Character();
        Character(const Character& other);
        Character operator=(const Character& other);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m) ;
        void unequip(int idx) ;
        void use(int idx, ICharacter& target);
};

#endif