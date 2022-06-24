/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:22:14 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/24 10:33:51 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *w;
        std::string name;
    public:
        HumanB();
        HumanB(std::string name);
        HumanB(std::string name, Weapon& w);
        ~HumanB();
        void setWeapon(Weapon& w);
        void attack();
};