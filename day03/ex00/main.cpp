/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:56:43 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/10 18:38:13 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap anion("Anion");
    ClapTrap cation("Cation");
    
    anion.attack("Cation");
    cation.takeDamage(2);
    cation.beRepaired(1);
    cation.attack("Anion");
    anion.takeDamage(7);
    anion.beRepaired(3);
    anion.beRepaired(1);
    cation.attack("Anion");
    anion.takeDamage(7);
    anion.beRepaired(1);
    cation.attack("Anion");
    anion.takeDamage(2);
    anion.beRepaired(1);
    anion.attack("Cation");
    anion.attack("Cation");
    cation.attack("Anion");
    cation.beRepaired(1);
    cation.beRepaired(1);
    cation.beRepaired(6);
    cation.attack("Anion");
    anion.attack("Cation");
    anion.beRepaired(7);
    return 0;
}