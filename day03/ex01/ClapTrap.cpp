/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:57:37 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/28 16:20:21 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "An individual got created !"<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    *this = obj;
}

ClapTrap::ClapTrap(std::string name) : HitPoints(10),EnergyPoints(10),AttackDamage(0)
{
    std::cout << name << " : Oh here I am, just get created, thanks god! "<< std::endl;
    this->name = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " : Oh now i'm dying! goodbye everybody !" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap  &obj)
{
    if (this == &obj)
        return *this;
    this->AttackDamage = obj.AttackDamage;
    this->EnergyPoints = obj.EnergyPoints;
    this->HitPoints = obj.HitPoints;
    return *this;
}        

void ClapTrap::attack(const std::string& target)
{
    if (HitPoints <= 0)
    {
        std::cout << this->name << " : Oh my god, i'm out of hit points, i can't attack anymore!" << std::endl;
        return ;
    }
    std::cout<< this->name << " : Hey " << target << " I'm gonna beat you, take this Yaaaaaaaaaaaa!" << std::endl;
    this->EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->name << " : Oh shit! I just lost " << amount << " hit points" << std::endl;
    this->HitPoints -= amount;
}
        
void ClapTrap::beRepaired(unsigned int amount)
{
    if (EnergyPoints <= 0)
    {
        std::cout << this->name << " : Oh my dear god i'm so weak, and i can't get repaired, i'm soo fucked up !"<< std::endl;
        return ;
    }
    std::cout<<this->name<<" : I'm getting repaired ! I gained "<< amount << " hit points"<<std::endl;
    this->HitPoints += amount;
    this->EnergyPoints--;
}



