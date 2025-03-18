#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class Contact{
    private:
        std::string PhoneNumber;
        std::string DarkestSecet;
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
    public:

    void SetFirstName(std::string firstname);
    void SetLastName(std::string lastname);
    void SetPhoneNumber(std::string phonenumber);
    void SetNickName(std::string nickname);
    void SetSecret(std::string secret);
    std::string GetFirstName();
    std::string GetLastName();
    std::string GetNickname();
    std::string GetNumber();
    std::string GetSecret();
    Contact();
    ~Contact();
};

Contact CreateContact();

#endif
