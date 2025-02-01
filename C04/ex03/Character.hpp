#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

struct Node {
    AMateria* material;
    Node* next;
};

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria* _inventory[4];
    Node* head;

public:
    Character();
    Character(std::string const & name);
    Character(const Character& other);
    Character& operator=(const Character& other);
    ~Character();
    
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    void add(AMateria* mat);
    void clearInventory();
    void clearLinkedList();
    void copyLinkedList(const Character& other);
};

#endif