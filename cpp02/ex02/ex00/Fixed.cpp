#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    value = 0;
}

Fixed::Fixed(const Fixed& a)
{
    std::cout << "Copy constructor called\n";
    *this = a;
}

Fixed& Fixed::operator=(const Fixed& a)
{
    std::cout << "Copy assignment operator called\n";
    if(this != &a)
        value = a.getRawBits();
    return *this;
}

void Fixed::setRawBits(int raw)
{
    std::cout << "setRawBits member function called\n";
    this->value = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return value;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}
