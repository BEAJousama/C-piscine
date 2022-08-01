/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:56:43 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/01 18:00:48 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScarvTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap anion("Anion");
    ScarvTrap french("French");
    FragTrap frag("Frag");
    
    anion.attack("French");
    french.takeDamage(0);
    frag.attack("French");
    french.takeDamage(30);
    french.beRepaired(1);
    french.attack("Anion");
    anion.takeDamage(20);
    anion.beRepaired(3);
    anion.beRepaired(1);
    frag.highFivesGuys();
    french.attack("Anion");
    anion.takeDamage(20);
    anion.beRepaired(1);
    french.attack("Anion");
    anion.takeDamage(2);
    anion.beRepaired(1);
    anion.attack("French");
    french.guardGate();
    anion.beRepaired(1);
    anion.beRepaired(1);
    frag.highFivesGuys();
    anion.beRepaired(1);
    anion.beRepaired(1);
    anion.beRepaired(1);
    anion.beRepaired(1);
    anion.attack("French");
    french.takeDamage(9);
    french.attack("Anion");
    french.beRepaired(1);
    frag.highFivesGuys();
    french.beRepaired(1);
    french.beRepaired(6);
    french.attack("Anion");
    frag.attack("French");
    french.takeDamage(30);
    anion.takeDamage(8);
    anion.attack("French");
    anion.beRepaired(7);
    return 0;
}