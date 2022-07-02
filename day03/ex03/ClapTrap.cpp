/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:57:37 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/02 15:10:24 by obeaj            ###   ########.fr       */
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
    std::cout << name << " [ClapTrap] : Oh here I am, just get created, thanks god! "<< std::endl;
    this->name = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " [ClapTrap] : Oh now i'm dying! bye ." << std::endl;
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
    if (HitPoints == 0)
    {
        std::cout << this->name << " [ClapTrap] : Oh my god, i'm out of hit points, i can't attack anymore!" << std::endl;
        return ;
    }
    if (EnergyPoints == 0)
    {
        std::cout << this->name << " [ClapTrap] : Oh my god, i'm out of energy points, i can't attack anymore!" << std::endl;
        return ;
    }
    std::cout<< this->name << " [ClapTrap] : Hey " << target << " I'm gonna beat you with "<<this->AttackDamage<<" points of damage, take this Yaaaaaaaaaaaa!" << std::endl;
    if (this->EnergyPoints)
        this->EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->name << " [ClapTrap] : Oh shit! I just lost " << amount << " hit points" << std::endl;
    if (amount <= this->HitPoints)
        this->HitPoints -= amount;
    else
        this->HitPoints = 0;
}
        
void ClapTrap::beRepaired(unsigned int amount)
{
    if (EnergyPoints == 0 || HitPoints == 0)
    {
        std::cout << this->name << " [ClapTrap] : Oh my dear god i'm so weak, and i can't get repaired, i'm soo fucked up !"<< std::endl;
        return ;
    }
    std::cout<<this->name<<" [ClapTrap] : I'm getting repaired ! I gained "<< amount << " hit points"<<std::endl;
    this->HitPoints += amount;
    if (this->EnergyPoints)
        this->EnergyPoints--;
}
