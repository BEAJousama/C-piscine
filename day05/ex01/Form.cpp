/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:10:55 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/08 18:44:04 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() :
name("default"),
gradToSign(150),
gradToExec(150),
isSigned(false)
{
}

Form::Form( const Form & src ):
name(src.name),
gradToSign(src.gradToSign),
gradToExec(src.gradToExec),
isSigned(false)
{
}

Form::Form(std::string name, int gradToSign, int gradToExec) : name(name), gradToSign(gradToSign), gradToExec(gradToExec) , isSigned(false)
{
	
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if (this == &rhs)
		return *this;
	this->isSigned = rhs.isItSigned();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "------------------------" << i.getName() << "------------------------\n";
	o << "Required grade to sign    : " << i.getGradeToSign() << "\n";
	o << "Required grade to execute : " << i.getGradeToExec() << "\n";
	if (i.isItSigned())
		o << "Is signed ?               : Yes\n";
	else
		o << "Is signed ?               : No\n";
	o << "-----------------------------------------------------\n";
	return o;
}


/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/

const char* Form::GradeTooHighException::what() const throw()
{
	return("Grade too high !");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return("Grade too low !");
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::setTosigned(bool isSigned)
{
	this->isSigned = isSigned;
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() >= this->getGradeToSign())
		throw GradeTooLowException();
	setTosigned(true);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Form::getName() const
{
	return this->name;
}
int Form::getGradeToSign() const
{
	return this->gradToSign;
}
int Form::getGradeToExec() const
{
	return this->gradToExec;
}
bool Form::isItSigned() const
{
	return this->isSigned;
}

/* ************************************************************************** */