/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:22:28 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/23 19:32:01 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
    
}

HumanA::HumanA(std::string name, Weapon w)
{
    this->name = name;
    this->w = w;
}

HumanA::HumanA(std::string name)
{
    this->name = name;
}

HumanA::~HumanA()
{
    
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->w.getType() << std::endl;
}