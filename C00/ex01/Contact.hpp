#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
    bool IsActive;
    std::string FristName;
    std::string LastName;
    std::string NickName;
    std::string NbPhone;
    std::string Secret;

    void IsValideIpout(const std::string &prompt, std::string &input);

public:
    Contact() : IsActive(false) {}
    bool is_valide() { return IsActive; }

    void SetData();
    void print_contact(int i);
};
std::string GetSubInput(std::string &input);
#endif