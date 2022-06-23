/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:22:31 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/23 19:29:04 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon w;
        std::string name;
    public:
        HumanA();
        HumanA(std::string name);
        HumanA(std::string name, Weapon w);
        ~HumanA();
        void attack();
};