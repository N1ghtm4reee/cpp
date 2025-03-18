#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

class PhoneBook {
    private:
        Contact contacts[8];
        int size;

    public:
        PhoneBook();
        ~PhoneBook();
        int PhoneBookSize();
        void AddContactToPhone(Contact contact);
        Contact GetContact(int index);
};


#endif