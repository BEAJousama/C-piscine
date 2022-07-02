/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:21:40 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/02 14:01:05 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"Dog created !"<<std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &obj)
{
    *this = obj;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout<<"Dog destructed !"<<std::endl;
}

Dog& Dog::operator=(const Dog &obj)
{
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout<<"Hao Hao"<<std::endl;
}