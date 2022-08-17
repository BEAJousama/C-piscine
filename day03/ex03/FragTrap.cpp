/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:23:59 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/28 16:07:34 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(const FragTrap &obj)
{
    *this = obj;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
    std::cout << _name << " [FragTrap] :¡Hola, me acaban de crear! Gracias a Dios."<< std::endl;
    this->AttackDamage = 30;
    this->EnergyPoints = 100;
    this->HitPoints = 100;
    this->name = _name;
}

FragTrap::~FragTrap()
{
    std::cout << this->name << " [FragTrap] : ¡Ah, y me muero! adiós !" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap  &obj)
{
    if (this == &obj)
        return *this;
    this->AttackDamage = obj.AttackDamage;
    this->EnergyPoints = obj.EnergyPoints;
    this->HitPoints = obj.HitPoints;
    return *this;
}
/*
void FragTrap::attack(const std::string& target)
{
    if (this->HitPoints <= 0)
    {
        std::cout << this->name << " : ¡Dios mío, no tengo más puntos de vida, no puedo atacar más!" << std::endl;
        return ;
    }
    if (this->EnergyPoints <= 0)
    {
        std::cout << this->name << " :¡Dios mío, me quedé sin puntos de energía, no puedo atacar más!" << std::endl;
        return ;
    }
    std::cout<< this->name << " : Hey " << target << " te dispararé como a un perro, Yaaaaaaaaaaaa!" << std::endl;
    this->EnergyPoints--;  
}
*/

void FragTrap::highFivesGuys(void)
{
    std::cout<< this->name <<  " [FragTrap] : High Fiiiiiive guys!" << std::endl;
}