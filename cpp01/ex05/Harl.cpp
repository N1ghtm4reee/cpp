#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::complain(std::string level)
{
    std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while(i < 4)
    {
        if (level == arr[i])
            break;
        i++;
    }
    void (Harl::*d)() = &Harl::debug;
    void (Harl::*in)() = &Harl::info;
    void (Harl::*w)() = &Harl::warning;
    void (Harl::*e)() = &Harl::error;
    switch (i) {
        case 0:
            (this->*d)();
            break;
        case 1:
            (this->*in)();
            break;
        case 2:
            (this->*w)();
            break;
        case 3:
            (this->*e)();
            break;
        default :
            std::cout << "Invalid option\n";
    }
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.";
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now\n";
}
