/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:46:43 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/01 14:22:08 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy Request", 72,45)
{
	this->target = "Default target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
Form("Robotomy Request", 72,45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ):
Form(src.name, src.gradToSign,src.gradToExec)
{
	this->setTarget(src.getTarget());
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

/*
** --------------------------------- METHODS ----------------------------------
*/
void	RobotomyRequestForm::RobotomyRequestForm::action() const
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