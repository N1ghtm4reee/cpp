#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : size(0)
{
}
PhoneBook::~PhoneBook()
{
}

int PhoneBook::PhoneBookSize()
{
    return (size);
}

void PhoneBook::AddContactToPhone(Contact contact)
{
    int set = 0;
    if (size >= 8)
    {
        set = 0;
        size = 7;
    }
    else
        set = size;
    contacts[set] = contact;
    size++;
}

Contact PhoneBook::GetContact(int index)
{
    return (contacts[index]);
}