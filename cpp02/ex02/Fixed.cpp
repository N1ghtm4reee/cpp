#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
    // std::cout << "Default constructor called\n";
    value = 0;
}

Fixed::Fixed(const Fixed& a)
{
    // std::cout << "Copy constructor called\n";
    *this = a;
}

Fixed::Fixed(const float nb)
{
    // std::cout << "Float constructor called\n";
    value = roundf(nb * (1 << fractional_bits));
}

Fixed::Fixed(const int nb)
{
    // std::cout << "Int constructor called\n";
    value = nb << fractional_bits;
}

Fixed& Fixed::operator=(const Fixed& a)
{
    // std::cout << "Copy assignment operator called\n";
    if(this != &a)
        value = a.value;
    return *this;
}

bool Fixed::operator>(const Fixed& a)
{
    return (value > a.value);
}

bool Fixed::operator<(const Fixed& a)
{
    return (value < a.value);
}

bool Fixed::operator==(const Fixed& a)
{
    return (value == a.value);
}

bool Fixed::operator!=(const Fixed& a)
{
    return (value != a.value);
}

bool Fixed::operator<=(const Fixed& a)
{
    return (value <= a.value);
}

bool Fixed::operator>=(const Fixed& a)
{
    return (value >= a.value);
}

Fixed Fixed::operator+(const Fixed& a)
{
    Fixed op = value + a.value;
    return op;
}

Fixed Fixed::operator-(const Fixed& a)
{
    Fixed op = value - a.value;
    return op;
}

Fixed Fixed::operator*(const Fixed& a)
{
    Fixed op;
    op.value = (value * a.value) >> fractional_bits;
    return op;
}

Fixed Fixed::operator/(const Fixed& a)
{
    Fixed op = value / a.value;
    return op;
}

Fixed& Fixed::operator++()//pre inc
{
    value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    value++;
    return tmp;
}

Fixed Fixed::operator--()//pre dec
{
    value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    value--;
    return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a.value < b.value)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.value < b.value)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a.value > b.value)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.value > b.value)
        return a;
    return b;
}

std::ostream& operator<<(std::ostream& output, const Fixed& a)
{
    output << a.toFloat();
    return output;
}

void Fixed::setRawBits(int raw)
{
    // std::cout << "setRawBits member function called\n";
    this->value = raw;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called\n";
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
    // std::cout << "Destructor called\n";
}
