/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:33:56 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/26 22:34:18 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_p_value = 0;
    std::cout<< "Default constructor called\n";
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout<<"Copy constructor called\n";
    *this = obj;
}

Fixed::Fixed(const int val)
{
    std::cout<<"Int constructor called\n";
    this->fixed_p_value = val << this->fixed_p_fract;
}

Fixed::Fixed(const float val)
{
    std::cout<<"Float constructor called\n";
    this->fixed_p_value = (int)(roundf(val * (1 << this->fixed_p_fract)));
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout<<"Copy assignment operator called\n";
    if (this != &obj)
        fixed_p_value = obj.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

int Fixed::getRawBits(void) const
{
    std::cout<<"getRawBits member function called\n";
    return (this->fixed_p_value);
}

void Fixed::setRawBits(int raw)
{
    this->fixed_p_value = raw;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called\n";
}

float Fixed::toFloat( void ) const
{
    return ((float) this->fixed_p_value / (float)(1 << this->fixed_p_fract));
}

int Fixed::toInt( void ) const
{
    return ((int) this->fixed_p_value >> this->fixed_p_fract );
}