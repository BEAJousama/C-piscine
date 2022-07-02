/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:43:51 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/01 16:51:42 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<<"WrongAnimal created !"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    *this = obj;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"WrongAnimal destructed !"<<std::endl;  
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj)
{
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout<<"WrongAnimal voice"<<std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}