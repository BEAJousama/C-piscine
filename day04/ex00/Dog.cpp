/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:21:40 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/30 23:28:46 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():type("Dog")
{
    
}

Dog::Dog(const Dog &obj)
{
    *this = obj;
}

Dog::~Dog()
{
    
}

Dog& Dog::operator=(cons Dog &obj)
{
    if (this = &obj)
        return *this;
    this->type = obj.type;
    return *this;
}

std::string Dog::getType()
{
    return this->type;
}

void makeSound()
{
    std::cout<<"Hao Hao"<<std::endl;
}