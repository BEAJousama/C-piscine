/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:57:39 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/30 22:51:21 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
    *this = obj;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    this->AttackDamage = FragTrap::AttackDamage;
    this->EnergyPoints = ScarvTrap::EnergyPoints;
    this->HitPoints = FragTrap::HitPoints;
    this->name = name;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << this->name << " : [DiamodTrap] I am dying, bye, bye !" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap  &obj)
{
    if (this == &obj)
        return *this;
    this->AttackDamage = obj.AttackDamage;
    this->EnergyPoints = obj.EnergyPoints;
    this->HitPoints = obj.HitPoints;
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScarvTrap::attack(target);   
}

void DiamondTrap::whoAmI()
{
    std::cout<< this->name <<" : who i am ? I am a [Diamondtrap] "<< " my name is "<< this->name << std::endl;
    std::cout<<"My grandfather is " << ClapTrap::name << std::endl;
}