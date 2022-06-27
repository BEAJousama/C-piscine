/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:57:37 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/27 21:41:08 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(const Point &obj)
{
    *this = obj
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
}

ClapTrap::~ClapTrap()
{
}

ClapTrap& operator=(const ClapTrap  &obj)
{
    if (this == &obj)
        return *this;
    return *this;
}


