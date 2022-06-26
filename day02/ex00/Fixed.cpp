/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:33:56 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/26 20:45:59 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_p_value = 0;
    std::cout<< "Default constructor called\n";
}

Fixed::Fixed(Fixed &obj)
{
    std::cout<<"Copy constructor called\n";
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout<<"Copy assignment operator called\n";
    if (*this != obj)
        fixed_p_value = obj.getRawBits();
    return *this;
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
