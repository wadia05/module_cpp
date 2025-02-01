#include "Character.hpp"

Character::Character() : _name(""), head(NULL)
{
    for(int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(std::string const & name) : _name(name), head(NULL)
{
    for(int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(const Character& other) : _name(other._name), head(NULL)
{
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
    copyLinkedList(other);
}

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        _name = other._name;
        clearInventory();
        clearLinkedList();
        for (int i = 0; i < 4; i++)
        {
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
        copyLinkedList(other);
    }
    return *this;
}

Character::~Character()
{
    clearInventory();
    clearLinkedList();
}

std::string const & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    if (!m) return;
    for(int i = 0; i < 4; i++)
    {
        if(!_inventory[i])
        {
            _inventory[i] = m;
            std::cout <<"loooo ==" << &_inventory << std::endl;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 )
    {
        std::cout << "Wrong index 1" << std::endl;
        return;
    }
    add(_inventory[idx]);
    std::cout <<"adddd =="<< &_inventory << std::endl;
    _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || !_inventory[idx])
    {
        std::cout << "Wrong index 2" << std::endl;
        return;
    }
    _inventory[idx]->use(target);
}

void Character::add(AMateria* mat)
{
    Node* newnode = new Node();
    newnode->material = mat;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void Character::clearInventory()
{
    for(int i = 0; i < 4; i++)
    {
        if(_inventory[i])
        {
            delete _inventory[i];
            _inventory[i] = NULL;
        }
    }
}

void Character::clearLinkedList()
{
    Node* current = head;
    while (current != NULL)
    {
        Node* next = current->next;
        delete current->material;
        delete current;
        current = next;
    }
    head = NULL;
}

void Character::copyLinkedList(const Character& other)
{
    Node* current = other.head;
    while (current != NULL)
    {
        add(current->material->clone());
        current = current->next;
    }
}