/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:33:47 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/01 12:37:07 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_H
# define _FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int fixed_p_value;
        static const int fixed_p_fract = 8;
    public:
        Fixed();
        Fixed(const Fixed &obj);
        Fixed(const int val);
        Fixed(const float val);
        ~Fixed();
        Fixed& operator=(const Fixed  &obj);
        bool operator==(Fixed const &obj) const;
        bool  operator>=(Fixed const &obj) const;
        bool operator<=(Fixed const &obj) const;
        bool operator!=(Fixed const &obj) const;
        bool operator<(Fixed const &obj) const;
        bool operator>(Fixed const &obj) const;
        Fixed operator+(Fixed const &obj);
        Fixed operator*(Fixed const &obj);
        Fixed operator/(Fixed const &obj);
        Fixed operator-(Fixed const &obj);
        Fixed& operator++(void);
        Fixed& operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);
        static Fixed& min(Fixed &a, Fixed& b);
        static Fixed& max(Fixed &a, Fixed& b);
        static Fixed const& min( Fixed const &a,  Fixed const& b);
        static Fixed const& max( Fixed const &a,  Fixed const& b);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif