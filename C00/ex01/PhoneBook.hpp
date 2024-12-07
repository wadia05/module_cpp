#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class Contact;  // Forward declaration

class PhoneBook {
private:
    Contact _cnt[8];
    int index;

public:
    PhoneBook();
    void AddContact();
    void PrintAllContact();
    void ContactIndex(const std::string &prompt);
};

std::string GetSubInput(std::string &input);

#endif