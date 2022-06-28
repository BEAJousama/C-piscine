/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScarvTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:52:58 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/28 15:25:57 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCARVTRAP_H
# define SCARVTRAP_H
#include "ClapTrap.hpp"

class ScarvTrap : public ClapTrap
{
    public:
        ScarvTrap();
        ScarvTrap(std::string name);
        ~ScarvTrap();
        ScarvTrap(const ScarvTrap &obj);
        ScarvTrap& operator=(const ScarvTrap &obj);
        void attack(const std::string& target);
        void guardGate();
};

#endif

