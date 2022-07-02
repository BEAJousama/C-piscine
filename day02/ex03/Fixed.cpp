/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:33:56 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/01 12:37:01 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_p_value = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
}

Fixed::Fixed(const int val)
{
    this->fixed_p_value = val << this->fixed_p_fract;
}

Fixed::Fixed(const float val)
{
    this->fixed_p_value = (int)(roundf(val * (1 << this->fixed_p_fract)));
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    if (this != &obj)
        this->fixed_p_value = obj.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

int Fixed::getRawBits(void) const
{
    return (this->fixed_p_value);
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_p_value = raw;
}

Fixed::~Fixed()
{
}

float Fixed::toFloat( void ) const
{
    return ((float) this->fixed_p_value / (float)(1 << this->fixed_p_fract));
}

int Fixed::toInt( void ) const
{
    return ((int) this->fixed_p_value >> this->fixed_p_fract );
}

bool Fixed::operator==(Fixed const &obj) const
{
    if (this->fixed_p_value == obj.fixed_p_value)
    {
        return true;
    }
    return false;
}

bool Fixed::operator>=(Fixed const &obj) const
{
    if (this->fixed_p_value >= obj.fixed_p_value)
    {
        return true;
    }
    return false;
}

bool Fixed::operator<=(Fixed const &obj) const
{
    if (this->fixed_p_value <= obj.fixed_p_value)
    {
        return true;
    }
    return false; 
}

bool Fixed::operator!=(Fixed const &obj) const
{
    if (this->fixed_p_value != obj.fixed_p_value)
    {
        return true;
    }
    return false;   
}

bool Fixed::operator<(Fixed const &obj) const
{
    if (this->fixed_p_value < obj.fixed_p_value)
    {
        return true;
    }
    return false;   
}

bool Fixed::operator>(Fixed const &obj) const
{
    if (this->fixed_p_value > obj.fixed_p_value)
    {
        return true;
    }
    return false;
}

Fixed Fixed::operator+(Fixed const &obj)
{
    return Fixed(this->toFloat() + obj.toFloat());

}

Fixed Fixed::operator*(Fixed const &obj)
{
    return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(Fixed const &obj)
{
    return Fixed(this->toFloat() / obj.toFloat());

}

Fixed Fixed::operator-(Fixed const &obj)
{
    return Fixed(this->toFloat() - obj.toFloat());

}

Fixed& Fixed::operator++(void)
{
    (this->fixed_p_value)++;
    return *this;
}

Fixed& Fixed::operator--(void)
{
    (this->fixed_p_value)--;
    return *this;  
}

Fixed Fixed::operator++(int)
{
    Fixed old = *this;
    this->fixed_p_value++;
    return old;  
}

Fixed Fixed::operator--(int)
{
    Fixed old = *this;
    this->fixed_p_value--;
    return old;  
}

Fixed& Fixed::min(Fixed &a, Fixed& b)
{
    return a <= b ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed& b)
{
    return a >= b ? a : b;
}

Fixed const& Fixed::min(Fixed const &a, Fixed const &b)
{
    return a <= b ? a : b;
}

Fixed const& Fixed::max(Fixed const &a,Fixed const &b)
{
    return a >= b ? a : b;
}
