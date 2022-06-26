/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:33:47 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/26 20:48:26 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_H
# define _FIXED_H

# include <iostream>
# include <string>

class Fixed
{
    private:
        int fixed_p_value;
        static const int fixed_p_fract = 8;
    public:
        Fixed();
        Fixed(Fixed &obj);
        Fixed& operator=(const Fixed &obj);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif