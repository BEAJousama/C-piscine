/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:56:43 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/28 16:11:10 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScarvTrap.hpp"

int main()
{
    ClapTrap anion("Anion");
    ScarvTrap french("French");
    
    anion.attack("French");
    french.takeDamage(2);
    french.beRepaired(1);
    french.attack("Anion");
    anion.takeDamage(7);
    anion.beRepaired(3);
    anion.beRepaired(1);
    french.attack("Anion");
    anion.takeDamage(7);
    anion.beRepaired(1);
    french.attack("Anion");
    anion.takeDamage(2);
    anion.beRepaired(1);
    anion.attack("French");
    french.guardGate();
    anion.beRepaired(1);
    anion.beRepaired(1);
    anion.beRepaired(1);
    anion.beRepaired(1);
    anion.beRepaired(1);
    anion.beRepaired(1);
    anion.attack("French");
    french.takeDamage(9);
    french.attack("Anion");
    french.beRepaired(1);
    french.beRepaired(1);
    french.beRepaired(6);
    french.attack("Anion");
    anion.takeDamage(8);
    anion.attack("French");
    anion.beRepaired(7);
    return 0;
}