/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:50:43 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/23 12:24:05 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    int    i = 0;
    if (N < 0)
        return (NULL);
    Zombie *z = new Zombie[N];
    while (i < N)
    {
        z[i].set_name(name);
        i++;
    }
    return (z);
}