#include "Contact.hpp"

Contact::Contact() : PhoneNumber(""), DarkestSecet(""), FirstName(""), LastName(""), Nickname("") {

}

Contact::~Contact()
{
    
}

std::string GetFirstName()
{
    std::string firstName;
    std::cout << "Enter first name: ";
    while(std::getline(std::cin, firstName))
        if (!firstName.empty())
            break;
    return firstName;
}

std::string GetLastName()
{
    std::string lastname;
    std::cout << "Enter last name: ";
    while(std::getline(std::cin, lastname))
        if (!lastname.empty())
            break;
    return lastname;
}

std::string GetNickName()
{
    std::string Nickname;
    std::cout << "Enter your Nickname : ";
    while(std::getline(std::cin, Nickname))
        if (!Nickname.empty())
            break;
    return Nickname;
}

std::string GetPhoneNumber()
{
    std::string phonenumber;
    std::cout << "Enter your phonenumber : ";
    while(std::getline(std::cin, phonenumber))
        if (!phonenumber.empty())
            break;
    return phonenumber;
}

std::string GetSecret()
{
    std::string secret;
    std::cout << "Enter your darkest secret : ";
    while(std::getline(std::cin, secret))
        if (!secret.empty())
            break;
    return secret;
}

Contact CreateContact()
{
    Contact contact;
    std::string FirstName = GetFirstName();
    if (FirstName.empty())
        exit(1);
    for (int i = 0; i < FirstName.size(); i++)
        if (!isalpha(FirstName[i]))
        {
            FirstName.erase();
        }
    contact.SetFirstName(FirstName);
    std::string LastName = GetLastName();
    if (LastName.empty())
        exit(1);
    for (int i = 0; i < LastName.size(); i++)
        if (!isalpha(LastName[i]))
        {
            LastName.erase();
        }
    contact.SetLastName(LastName);
    std::string Nickname = GetNickName();
    if (Nickname.empty())
        exit(1);
    for (int i = 0; i < Nickname.size(); i++)
        if (!isalpha(Nickname[i]))
        {
            Nickname.erase();
        }
    contact.SetNickName(Nickname);
    std::string PhoneNumber = GetPhoneNumber();
    if (PhoneNumber.empty())
        exit(1);
    for (int i = 0; i < PhoneNumber.size(); i++)
        if (!isdigit(PhoneNumber[i]))
        {
            PhoneNumber.erase();
        }
    contact.SetPhoneNumber(PhoneNumber);
    std::string Secret = GetSecret();
    if (Secret.empty())
        exit(1);
    for (int i = 0; i < Secret.size(); i++)
        if (!isprint(Secret[i]))
        {
            Secret.erase();
        }
    contact.SetSecret(Secret);
    return contact;
}
