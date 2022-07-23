/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:54:11 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/02 15:54:24 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria(std::string const & type)
{
    this->type = type;
}
        
AMateria(AMateria& obj)
{
    *this = obj;
}

AMateria()
{

}
        
~AMateria()
{

}

AMateria& operator=(AMateria& obj)
{
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}
        
std::string const & getType() const;
{
    return this->type;
}
        
AMateria* clone() const
{

}

void use(ICharacter& target)
{

}

