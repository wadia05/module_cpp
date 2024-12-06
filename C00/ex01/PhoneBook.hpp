#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
// #include "Contact.hpp"
class Contact;  // Forward declaration instead of #include "Contact.hpp"

class PhoneBook
{
private:
    Contact cnt[8];
    int index;

public:
    PhoneBook() : index(0) {}

    void AddContact()
    {
        cnt[index].SetData();
        index = (index + 1) % 8;
    }

    void PrintAllContact();
};

std::string GetSubInput(std::string &input);

#endif