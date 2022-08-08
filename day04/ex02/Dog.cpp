/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:21:40 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/08 18:13:03 by obeaj            ###   ########.fr       */
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
    this->brain = nullptr;
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
    delete brain;
    if (obj.brain)
        this->brain = new Brain();
    else
        this->brain = nullptr;    
    this->type = obj.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout<<"Hao Hao"<<std::endl;
}