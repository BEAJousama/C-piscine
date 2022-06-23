/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:22:51 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/23 17:31:30 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z1;

    z1 = newZombie("Foo");
    z1->announce();
    std::cout << z1->get_name() + ": heap-allocated zombie" << std::endl;
    randomChump("Boo");
    randomChump("Too");
    delete z1;
}