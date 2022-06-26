/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:33:47 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/26 22:09:23 by obeaj            ###   ########.fr       */
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
        Fixed& operator=(const Fixed &obj);
        friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

};

#endif