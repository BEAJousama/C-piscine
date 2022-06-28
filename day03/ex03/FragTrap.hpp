/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:52:58 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/28 15:25:57 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_H
# define FragTrap_H
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap &obj);
        FragTrap& operator=(const FragTrap &obj);
        void highFivesGuys(void);
};

#endif

