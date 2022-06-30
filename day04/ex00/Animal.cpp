/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 22:53:43 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/30 23:15:45 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    
}

Animal::Animal(const Animal &obj)
{
    *this = obj;
}

Animal::~Animal()
{
    
}

Animal& Animal::operator=(cons Animal &obj)
{
    if (this = &obj)
        return *this;
    this->type = obj.type;
    return *this;
}