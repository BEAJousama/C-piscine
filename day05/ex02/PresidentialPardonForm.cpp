/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:46:32 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/30 11:47:21 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() :
name("Presedential")
target("default"),
gradToSign(25),
gradToExec(5),
isSigned(false)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : target(target), gradToSign(25), gradToExec(5) , isSigned(false)
{

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ):
name(src.getName());
target(src.getTarget()),
gradToSign(src.gradToSign),
gradToExec(src.gradToExec),
isSigned(false)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if (this == &rhs)
		return *this;
	this->isSigned = rhs.isItSigned();
	this->target = rhs.getTarget();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::Action() const
{
	std::cout << this->getTarget() << " has been officially pardoned by Zafod Beeblebrox" << std::endl;
}

/* ************************************************************************** */