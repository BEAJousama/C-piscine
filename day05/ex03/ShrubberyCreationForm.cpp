/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:44:20 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/01 15:41:21 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm():
Form("Shrubbery Creation", 145, 137)
{
    	this->target = "Default target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form("Shrubbery Creation", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src):
Form(src.name, src.gradToSign, src.gradToExec)
{
	this->setTarget(src.getTarget());
}


// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
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
    fout<<"	                           ### \\/#|### |/####" 			<< "\n";
    fout<<"                           ##\\/#/ \\||/##/_/##/_#" 		<< "\n";
    fout<<"                         ###  //###|/ \\/ # ###\n";
    fout<<"                       ##_\\_#\\_\\## | #/###_/_####\n";
    fout<<"                      ## #### # \\ #| /  #### ##/##\n";
    fout<<"                       __#_--###`  |{,###---###-~\n";
    fout<<"                                 \\ }{				\n";
    fout<<"                                  }}{				\n";
    fout<<"                                  }}{				\n";
    fout<<"                             ejm  {{}				\n";
    fout<<"                            , -=-~{ .-^- _			\n";
    fout<<"                                  `}				\n";
    fout<<"                                   {				\n";
}
