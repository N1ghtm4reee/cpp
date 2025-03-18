#include "PhoneBook.hpp"
#include "Contact.hpp"

void DisplayContacts(PhoneBook PhoneBook)
{
    std::cout << "|   Index  |First Name| Last Name|  Nickname|\n";
    for (int i = 0; i < PhoneBook.PhoneBookSize(); i++)
    {
        std::cout << "|";
        Contact Contact = PhoneBook.GetContact(i);
        std::cout << "         ";
        std::cout << i + 1;
        std::cout << "|";
        std::string firstName = Contact.GetFirstName();
        if (firstName.size() > 10)
        {
            firstName.erase(9);
            firstName.push_back('.');
        }
        else
        {
            for (unsigned long i = 0; i < (10 - firstName.size()); i++)
            {
                std::cout << " ";
            }
        }
        std::cout << firstName;
        std::cout << "|";
        std::string lastName = Contact.GetLastName();
        if (lastName.size() > 10)
        {
            lastName.erase(9);
            lastName.push_back('.');
        }
        else
        {
            for (unsigned long i = 0; i < (10 - lastName.size()); i++)
            {
                std::cout << " ";
            }
        }
        std::cout << lastName;
        std::cout << "|";
        std::string Nickname = Contact.GetNickname();
        if (Nickname.size() > 10)
        {
            Nickname.erase(9);
            Nickname.push_back('.');
        }
        else
        {
            for (unsigned long i = 0; i < (10 - Nickname.size()); i++)
            {
                std::cout << " ";
            }
        }
        std::cout << Nickname;
        std::cout << "|";
        std::cout << std::endl;
    }
}

void GetContactInfo(PhoneBook PhoneBook, int Index)
{
    std::cout << "First Name : " << (PhoneBook.GetContact(Index - 1)).GetFirstName() << "\n";
    std::cout << "Last Name : " << (PhoneBook.GetContact(Index - 1)).GetLastName() << "\n";
    std::cout << "NickName : " << (PhoneBook.GetContact(Index - 1)).GetNickname() << "\n";
    std::cout << "Phone Number : " << (PhoneBook.GetContact(Index - 1)).GetNumber() << "\n";
    std::cout << "Darkest Secret : " << (PhoneBook.GetContact(Index - 1)).GetSecret() << "\n";
}

void Search(PhoneBook PhoneBook)
{
    if (PhoneBook.PhoneBookSize() > 0)
    {
        DisplayContacts(PhoneBook);
        int Index = 0;
        std::string inpt;
        std::cout << "choose contact to reach : ";
        std::cin.clear();
        while (std::getline(std::cin, inpt))
        {
            if (inpt.empty() == 0)
                break ;
        }
        if (inpt.empty())
            exit(1);
        for (int i = 0; i < inpt.size(); i++)
            if (!(inpt[i] >= '0' && inpt[i] <= '9'))
            {
                std::cerr << "Invalid Index\n";
                return ;
            }
        Index = std::stoi(inpt);
        if (Index > PhoneBook.PhoneBookSize() || Index <= 0)
            std::cerr << "Invalid Index\n";
        else
            GetContactInfo(PhoneBook, Index);
    }
    else
        std::cout << "No registered Contacts" << std::endl;
}


int main()
{
    PhoneBook PhoneBook;
    while(1)
    {
        std::cout << "Type ADD to add new contact or type SEARCH to look for a contact infos or type EXIT to exit\n";
        std::string input;
        getline(std::cin, input);
        if (input == "ADD")
        {
            Contact NewContact = CreateContact();
            if (NewContact.GetFirstName().empty() || NewContact.GetLastName().empty() || NewContact.GetNickname().empty() || NewContact.GetNumber().empty() || NewContact.GetSecret().empty())
                std::cerr << "Contact creation failed. No contact added." << std::endl;
            else
                PhoneBook.AddContactToPhone(NewContact);
        }
        else if (input == "SEARCH")
            Search(PhoneBook);
        else if (input == "EXIT" || input == "")
            break;
    }
    return 0;
}
