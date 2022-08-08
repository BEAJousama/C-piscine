/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:58:09 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/06 21:47:02 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>

class Convert
{
    private:
        std::string value;
        double  d;
        char    c;
        int     i;
        float   f;
        bool    isnumber;
    public:
        Convert();
        ~Convert();
        Convert(std::string val);
        Convert(Convert const &obj);
        Convert& operator=(Convert const &obj);
        // std::string getVlaue() const;
        int getInt() const;
        float getFloat() const;
        double getDouble() const;
        char getChar() const;
        bool getIsnumber() const;
        // void        setValue(std::string val);
        // bool        isFloat(std::string const str);
        // bool        isInt(std::string const str);
        // bool        isDouble(std::string const str);
        int         ft_isNumber(std::string str);
};
std::ostream& operator<<(std::ostream& os, const Convert& obj);

#endif