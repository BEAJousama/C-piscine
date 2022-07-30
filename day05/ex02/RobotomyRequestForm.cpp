/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:46:43 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/30 11:31:00 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm():
target("default"),
gradToSign(72),
gradToExec(45),
isSigned(false)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
target(target),
gradToSign(72),
gradToExec(45),
isSigned(false)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ):
target(src.target),
gradToSign(src.gradToSign),
gradToExec(src.gradToExec),
isSigned(false)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if (this == &rhs)
		return *this;
	this->isSigned = rhs.isItSigned();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	RobotomyRequestForm::Action() const
{
	std::cout << "< TRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR >" << std::endl;
	if (rand() % 2)
		std::cout << " [ " << this->getTarget() << " ] has been robotomized SUCCESSFULLY" << std::endl;
	else
		std::cout << " [ " << this->getTarget() << " ] 's robotomization FAILED" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */