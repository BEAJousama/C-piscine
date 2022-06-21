/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:50:30 by obeaj             #+#    #+#             */
/*   Updated: 2022/05/20 15:56:02 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    std::string command;
    t_info infos;
    int    i;
    PhoneBook p;
    
    i = 0;
    while(true)
    {
        std::cout << "veuillez saisir une commande: ";
        if(!std::getline(std::cin,command))
            break;
        if (i > 7)
            i = 0;
        if(!command.compare("ADD"))
        {
            std::cout << "First name: ";
            if(!std::getline(std::cin,infos.first_name))
                break;
            std::cout << "Last name: ";
            if(!std::getline(std::cin,infos.last_name))
                break;
            std::cout << "Nick name: ";
            if(!std::getline(std::cin,infos.nick_name))
                break;
            std::cout << "Phone number: ";
            if(!std::getline(std::cin,infos.phone_number))
                break;
            std::cout << "Darkest secret: ";
            if(!std::getline(std::cin,infos.dark_sec))
                break;
            if(!infos.first_name.empty() && !infos.last_name.empty() &&
                !infos.nick_name.empty() && !infos.phone_number.empty() &&
                !infos.dark_sec.empty())
            {
                    p.setcontact(i, infos);
                    i++;     
            }
        }
        else if(!command.compare("EXIT"))
            break;
        else if(!command.compare("SEARCH"))
        {
            p.showcontacts();
        }
    }
    return (0);
}