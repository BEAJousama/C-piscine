/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:21:40 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/30 23:42:56 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
}

Dog::Dog(const Dog &obj)
{
    *this = obj;
}

Dog::~Dog()
{
    
}

Dog& Dog::operator=(const Dog &obj)
{
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}

std::string Dog::getType() const
{
    return this->type;
}

void Dog::makeSound() const
{
    std::cout<<"Hao Hao"<<std::endl;
}