/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:57:36 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/30 17:14:30 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
#include "ScarvTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScarvTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap &obj);
        DiamondTrap& operator=(const DiamondTrap  &obj);
        void attack(const std::string& target);
        void whoAmI();
};

#endif
