/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:44:49 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/04 22:08:27 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<<"WrongCat created !"<<std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj)
{
    *this = obj;
}

WrongCat::~WrongCat()
{
    std::cout<<"WrongCat destructed !"<<std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &obj)
{
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout<<"Wrong : Maouuu Maouuu!"<<std::endl;
}