/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:44:20 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/29 14:27:03 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm():
target("default"),
gradToSign(145),
gradToExec(137),
isSigned(false)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
target(target),
gradToSign(145),
gradToExec(137),
isSigned(false)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src):
target(src.target),
gradToSign(src.gradToSign),
gradToExec(src.gradToExec),
isSigned(false)
{
}


// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	if (this == &rhs)
		return *this;
	this->isSigned = rhs.isItSigned();
	return *this;
}

// Methods

void ShrubberyCreationForm::action() const
{
	std::fstream fout;
	fout.open(this->getTarget() + "_shrubbery", std::ios::out);
    fout<<"                               # #### ####" 				<< "\n";
    fout<<"	                           ### \/#|### |/####" 			<< "\n";
    fout<<"                           ##\/#/ \||/##/_/##/_#" 		<< "\n";
    fout<<"                         ###  \/###|/ \/ # ###";
    fout<<"                       ##_\_#\_\## | #/###_/_####\n";
    fout<<"                      ## #### # \ #| /  #### ##/##\n";
    fout<<"                       __#_--###`  |{,###---###-~\n";
    fout<<"                                 \ }{				\n";
    fout<<"                                  }}{				\n";
    fout<<"                                  }}{				\n";
    fout<<"                             ejm  {{}				\n";
    fout<<"                            , -=-~{ .-^- _			\n";
    fout<<"                                  `}				\n";
    fout<<"                                   {				\n";
}
