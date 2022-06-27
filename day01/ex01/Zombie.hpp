/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:09:21 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/27 13:18:23 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
# include <iostream>
# include <string>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string name);
    void set_name(std::string name);
    std::string get_name();
    void announce();
    ~Zombie();
};

Zombie*  zombieHorde( int N, std::string name );

#endif
