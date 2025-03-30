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
        bool operator>(const Fixed& a);
        bool operator<(const Fixed& a);
        bool operator==(const Fixed& a);
        bool operator!=(const Fixed& a);
        bool operator>=(const Fixed& a);
        bool operator<=(const Fixed& a);
        Fixed operator+(const Fixed& a);
        Fixed operator-(const Fixed& a);
        Fixed operator*(const Fixed& a);
        Fixed operator/(const Fixed& a);
        Fixed operator++(void);
        Fixed operator++(int);
        Fixed operator--(void);
        Fixed operator--(int);
        ~Fixed();
        int getRawBits(void) const ;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        static Fixed& min(Fixed& a, Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
};

std::ostream& operator<<(std::ostream& output, const Fixed& a);

#endif
