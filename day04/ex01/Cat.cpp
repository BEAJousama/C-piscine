/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:21:14 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/13 17:38:59 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat created !"<<std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
    this->brain = NULL;
    *this = obj;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout<<"Cat destructed !"<<std::endl;  
}

Cat& Cat::operator=(const Cat &obj)
{
    Animal::operator=(obj);
    if (this == &obj)
        return *this;
    delete brain;
    if (obj.brain)
    {
        this->brain = new Brain();
        for (int i = 0; i < 100 ; i++)
        {
            this->getBrain()[i] = obj.getBrain()[i];
        }
    }
    else
        this->brain = NULL;    
    this->type = obj.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout<<"Miao Miao!"<<std::endl;
}

Brain * Cat::getBrain() const
{
    return this->brain;
}

void    Cat::setBrain(Brain *b)
{
    for (int i = 0; i < 100; i++)
    {
        this->brain->setIdeas(b->getIdeas(i), i);
    }
}