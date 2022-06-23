/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:22:20 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/23 15:01:59 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H
# include <string>
# include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        ~Weapon();
        std::string& getType();
        void    setType(std::string t);
        
}

#endif