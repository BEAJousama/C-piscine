/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:21:14 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/02 12:38:04 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat created !"<<std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &obj)
{
    *this = obj;
}

Cat::~Cat()
{
    std::cout<<"Cat destructed !"<<std::endl;
}

Cat& Cat::operator=(const Cat &obj)
{
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout<<"Miao Miao!"<<std::endl;
}