#include "Contact.hpp"

void Contact::SetFirstName(std::string firstname)
{
    FirstName = firstname;
}
void Contact::SetLastName(std::string lastname)
{
    LastName = lastname;
}
void Contact::SetPhoneNumber(std::string phonenumber)
{
    PhoneNumber = phonenumber;
}
void Contact::SetNickName(std::string nickname)
{
    Nickname = nickname;
}
void Contact::SetSecret(std::string secret)
{
    DarkestSecet = secret;
}
std::string Contact::GetFirstName()
{
    return (FirstName);
}
std::string Contact::GetLastName()
{
    return (LastName);
}
std::string Contact::GetNickname()
{
    return (Nickname);
}
std::string Contact::GetNumber()
{
    return (PhoneNumber);
}

std::string Contact::GetSecret()
{
    return (DarkestSecet);
}
