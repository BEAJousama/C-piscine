/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:56:43 by obeaj             #+#    #+#             */
/*   Updated: 2023/03/22 11:49:46 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return (1);
    }
    BitcoinExchange b("data.csv");
    b.exchange(av[1]);
    return (0);
}