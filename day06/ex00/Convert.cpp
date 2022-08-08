/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:58:13 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/06 21:46:56 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
    
}

Convert::~Convert()
{
    
}

Convert::Convert(Convert const &obj)
{
    *this = obj;
}

Convert::Convert(std::string val)
{
    this->value = val;
    this->isnumber = true;
    if (static_cast<char>(ft_isNumber(val)) == 'd')
    {
        try
        {
            d = std::stod(val);
        }
        catch(...)
        {
            d = std::stod("nan");
        }
        f = static_cast<float>(d);
        i = static_cast<int>(d);
        c = static_cast<char>(d);
    }
    else if (ft_isNumber(val) == 'f')
    {
        try
        {
            f = std::stof(val);
        }
        catch(...)
        {
            f = std::stof("nan");
        }
        d = static_cast<double>(f);
        i = static_cast<int>(f);
        c = static_cast<char>(f);
    }
    else if (ft_isNumber(val) == 'i')
    {
        try
        {
            i = std::stoi(val);
        }
        catch(...)
        {
            i = std::stoi("nan");
        }
        d = static_cast<double>(i);
        f = static_cast<float>(i);
        c = static_cast<char>(i);
    }
    else if(ft_isNumber(val) == 'c')
    {
        c = val[0];
        i = static_cast<int>(c);
        d = static_cast<double>(c);
        f = static_cast<float>(c);
    }
    else 
        isnumber = false;  
}

Convert& Convert::operator=(Convert const &obj)
{
    if(this == &obj)
        return *this;
    this->value = obj.value;
    return *this;
}

// std::string Convert::getVlaue() const
// {
//     return this->value;
// }

// void        Convert::setValue(std::string val)
// {
//     this->value = val;
// }

bool Convert::getIsnumber() const
{
    return this->isnumber;
}


std::ostream& operator<<(std::ostream& os, const Convert& obj)
{
    if (!obj.getIsnumber() || isnan(obj.getDouble()))
        os << "char: impossible" << obj.getChar() << std::endl;
    else if (isprint(obj.getInt()) == 0 && obj.getIsnumber())
        os << "char: Non displayable" << std::endl;
    else
        os << "char: " << obj.getChar() << std::endl;
    if (!obj.getIsnumber() || isnan(obj.getDouble()))
        os << "int: impossible" << std::endl;
    else
        os << "int: " << obj.getInt() << std::endl;
    if (!obj.getIsnumber())
        os << "float: nanf" << std::endl;
    else if (obj.getInt() == obj.getFloat())
        os << "float: " << obj.getFloat() << ".0f" << std::endl;
    else
        os << "float: " << obj.getFloat() << "f" << std::endl;
    if (obj.getInt() == obj.getDouble())
        os << "double: " << obj.getDouble() << ".0" << std::endl;
    else if (!obj.getIsnumber())
        os << "double: nan" << std::endl;
    else
        os << "double: " << obj.getDouble() << std::endl;
    return os;
}

// bool        Convert::isFloat(std::string const str)
// {
//     try {
//         std::stof(str);
//         return true;
//     } catch(...) {
//         return false;
//     }
// }
// bool        Convert::isInt(std::string const str)
// {
//     try {
//         std::stoi(str);
//         return true;
//     } catch(...) {
//         return false;
//     }
// }
// bool        Convert::isDouble(std::string const str)
// {
    
//     try {
//         std::stod(str);
//         return true;
//     } catch(...) {
//         return false;
//     }  
// }

int Convert::ft_isNumber(std::string str)
{
    int i = 0;
    int p = 0;
    
    while (i < static_cast<int>(str.length() - 1))
    {
        if(str[i] == '.')
            p++;
        if(!isdigit(str[i]) && str[i] != '.' && str != "-inf" && str != "-inff" &&
            str != "inf" &&  str != "inff" &&  str != "+inf" &&  str != "+inff")
            return 0;
        i++;
    }
    if (str.length() == 1 && !isdigit(str[0]))
        return 'c';
    if (!strchr(str.c_str(), '.') && !strchr(str.c_str(), 'f'))
        return 'i';
    if (str[i] == 'f')
        return 'f';
    if (p == 1 || str[i] == '.')
        return 'd';
    return 0;
}

int Convert::getInt() const
{
    return this->i;
}
float Convert::getFloat() const
{
    return this->f;
    
}
double Convert::getDouble() const
{
    
    return this->d;
}
char Convert::getChar() const
{
    return this->c;
    
}