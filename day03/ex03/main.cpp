/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:56:43 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/30 17:41:44 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScarvTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    ClapTrap anion("Anion");
    ScarvTrap french("French");
    FragTrap frag("Frag");
    DiamondTrap diams("Diams");
    
    anion.attack("French");
    french.takeDamage(0);
    frag.attack("French");
    french.takeDamage(30);
    diams.attack("French");
    french.attack("Diams");
    diams.guardGate();
    diams.takeDamage(20);
    diams.whoAmI();
    
    return 0;
}