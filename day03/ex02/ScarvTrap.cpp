/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScarvTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:23:59 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/10 19:25:05 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScarvTrap.hpp"

ScarvTrap::ScarvTrap()
{
    std::cout << "ScarvTrap x : Putain ! j'suis né sans nom !"<< std::endl;
}

ScarvTrap::ScarvTrap(const ScarvTrap &obj)
{
    *this = obj;
}

ScarvTrap::ScarvTrap(std::string _name)
{
    std::cout << _name << " [ScarvTrap] : Bonjour, je viens d'etre creé! Dieu merci."<< std::endl;
    this->AttackDamage = 20;
    this->EnergyPoints = 50;
    this->HitPoints = 100;
    this->name = _name;
}

ScarvTrap::~ScarvTrap()
{
    std::cout << this->name << " [ScarvTrap] : Oh eeeet je meurt! au revoir !" << std::endl;
}

ScarvTrap& ScarvTrap::operator=(const ScarvTrap  &obj)
{
    if (this == &obj)
        return *this;
    this->AttackDamage = obj.AttackDamage;
    this->EnergyPoints = obj.EnergyPoints;
    this->HitPoints = obj.HitPoints;
    return *this;
}

void ScarvTrap::attack(const std::string& target)
{
    if (this->HitPoints <= 0)
    {
        std::cout << this->name << " [ScarvTrap] : Oh mon dieu, j n'ai plus de hit points  , je ne peux plus attquer!" << std::endl;
        return ;
    }
    if (this->EnergyPoints <= 0)
    {
        std::cout << this->name << " [ScarvTrap] : Oh mon dieu, j n'ai plus d'energy points  , je ne peux plus attquer!" << std::endl;
        return ;
    }
    std::cout<< this->name << " [ScarvTrap] : Hey " << target << " je vais t'abattre comme un chien avec "<<this->AttackDamage<<" points de damage, Yaaaaaaaaaaaa!" << std::endl;
    if (this->EnergyPoints)
        this->EnergyPoints--;  
}

void ScarvTrap::guardGate()
{
    std::cout<< this->name <<  " [ScarvTrap] : J'active le Gate Keeper Mode !" << std::endl;
}