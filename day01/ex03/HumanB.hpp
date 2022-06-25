/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:22:14 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/25 12:26:03 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

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

#endif //HUMANB_H
