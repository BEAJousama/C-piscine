/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:22:34 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/24 10:33:56 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name, Weapon& w)
{
    this->name = name;
    this->w = &w;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
    
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->w->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& w)
{
    this->w = &w;
}