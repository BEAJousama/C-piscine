/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:21:14 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/08 18:12:43 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat created !"<<std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &obj)
{
    this->brain = nullptr;
    *this = obj;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout<<"Cat destructed !"<<std::endl;  
}

Cat& Cat::operator=(const Cat &obj)
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

void Cat::makeSound() const
{
    std::cout<<"Miao Miao!"<<std::endl;
}