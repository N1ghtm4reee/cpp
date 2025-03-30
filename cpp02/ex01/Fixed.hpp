#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        static const int fractional_bits;
    public:
        Fixed();
        Fixed(const Fixed& a);
        Fixed(const float nb);
        Fixed(const int nb);
        Fixed& operator=(const Fixed& a);
        ~Fixed();
        int getRawBits(void) const ;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& output, const Fixed& a);

#endif
