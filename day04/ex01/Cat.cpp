/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:21:14 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/02 14:01:17 by obeaj            ###   ########.fr       */
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
    this->type = obj.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout<<"Miao Miao!"<<std::endl;
}