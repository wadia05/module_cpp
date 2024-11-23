#include <iostream>

class contact
{
    private :
        std::string FristName;
        std::string LastName;
        std::string NickName;
        std::string NbPhone;
        std::string Secret;
    public :
        void get_data()
        {
            std::cout << "Enter First Name: ";
            std::getline(std::cin, FristName);
            std::cout << "Enter Last Name: ";
            std::getline(std::cin, LastName);
            std::cout << "Enter Nickname: ";
            std::getline(std::cin, NickName);
            std::cout << "Enter Phone Number: ";
            std::getline(std::cin, NbPhone);
            std::cout << "Enter Darkest Secret: ";
            std::getline(std::cin, Secret);
        }
        void PrintData()
        {
            std::cout << "-------------------------------------------------------" << std::endl;
            std::cout << FristName << std::endl;
            std::cout << LastName << std::endl;
            std::cout << NickName << std::endl;
            std::cout << NbPhone << std::endl;
            std::cout << Secret << std::endl;
        }

};
class PhoneBook
{
    private :
        contact cnt[8];
        int index;

    public :
        PhoneBook() : index(0){}
        void AddContact()
        {
            if (index > 8)
                index = 0;
            cnt[index].get_data();
            index += 1;   
        }
        void print_contact()
        {
            int i  = 0;
            while (i < index)
            {
                cnt[i].PrintData();
                i++;
            }
        }
};
void InputPhoneBook()
{
    std::cout << "*_________ PHONE BOOK _________*" << std::endl;
    std::cout << "ADD --> save a new contact\nSEARCH --> display a specific contact\nEXIT --> exit phone book" << std::endl;
    std::cout << "Enter here ::"; 

}
int main (void)
{
    PhoneBook book;
    std::string input;
    bool look = true;
    while (look)
    {   InputPhoneBook();
        std::getline(std::cin, input);
        if("ADD" == input)
        {
            book.AddContact();
            std::cout << "Add" << std::endl;
        }
        else if("SEARCH" == input)
        {
            book.print_contact();
            std::cout << "SEARCH" << std::endl; 
        }
        else if("EXIT" == input)
            look = false;
    }
    std::cout << "GOOD BYE LOVE U" << std::endl; 
}