/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:19:40 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/24 21:46:07 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    int  i = 0;
    if (ac != 2)
        return 1;
    std::string str = av[1];
    std::string s[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for(i = 0; i < 4; i++)
    {
        if (av[1] == s[i])
            break;
    }
    switch(i)
    {
        case 0:
            harl.complain("DEBUG");
            harl.complain("INFO");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break ;
        case 1:
            harl.complain("INFO");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break ;
        case 2:
            harl.complain("WARNING");
            harl.complain("ERROR");
            break ;
        case 3:
            harl.complain("ERROR");
            break ;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << "\n";
    }

    return 0;
}