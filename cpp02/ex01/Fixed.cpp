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

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called\n";
    value = roundf(nb * (1 << fractional_bits));
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called\n";
    value = nb << fractional_bits;
}

Fixed& Fixed::operator=(const Fixed& a)
{
    std::cout << "Copy assignment operator called\n";
    if(this != &a)
        value = a.value;
    return *this;
}

std::ostream& operator<<(std::ostream& output, const Fixed& a)
{
    output << a.toFloat();
    return output;
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

float Fixed::toFloat(void) const
{
    return ((float)value / (1 << fractional_bits));
}

int Fixed::toInt(void) const
{
    return (value / (1 << fractional_bits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}
