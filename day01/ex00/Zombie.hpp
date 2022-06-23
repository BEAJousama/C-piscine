/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:09:21 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/23 12:04:23 by obeaj            ###   ########.fr       */
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
    void set_name(std::string name){this->name = name;};
    std::string get_name(){return this->name;};
    void announce(){std::cout<<this->name + ": BraiiiiiiinnnzzzZ..."<< std::endl;};
    ~Zombie();
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif
