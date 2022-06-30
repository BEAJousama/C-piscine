/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:21:14 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/30 23:42:37 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
}

Cat::Cat(const Cat &obj)
{
    *this = obj;
}

Cat::~Cat()
{
    
}

Cat& Cat::operator=(const Cat &obj)
{
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}

std::string Cat::getType()
{
    return this->type;
}

void makeSound()
{
    std::cout<<"Miao Miao!"<<std::endl;
}