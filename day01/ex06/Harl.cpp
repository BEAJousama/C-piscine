/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:23:02 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/24 21:44:05 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    
}

Harl::~Harl()
{
    
}

void    Harl::debug()
{
    std::cout<< "[DEBUG]" << std::endl;
    std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}

void    Harl::error()
{
    std::cout<< "[ERROR]" << std::endl;
    std::cout<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::warning()
{
    std::cout<< "[WARNING]" << std::endl;
    std::cout<< "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::info()
{
    std::cout<< "[INFO]" << std::endl;
    std::cout<< "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::complain(std::string level)
{
    int i = 0;
    typedef void (Harl::*HARLPTR)();
    HARLPTR harl[4] = {
        &Harl::info,
        &Harl::warning,
        &Harl::error,
        &Harl::debug
    };
    std::string levels[4] = {
            "INFO",
            "WARNING",
            "ERROR",
            "DEBUG"
    };
    for(i = 3; i >=0; i--)
    {
        if (level == levels[i])
        {
            (this->*(harl[i]))();
            break ;
        }
    }
}
