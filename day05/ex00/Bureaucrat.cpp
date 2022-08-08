/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:05:10 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/08 18:26:03 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string name , int grade) : name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    *this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this == &obj)
        return *this;
    this->name = obj.name;
    this->grade = obj.grade;
    return *this;
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade is less than 1 !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade is more than 150 !");
}


std::string Bureaucrat::getName() const
{
    return this->name;
}

int         Bureaucrat::getGrade()
{
    return this->grade;
}

void        Bureaucrat::GradeIncrement()
{
    if (this->grade <= 1)
        throw GradeTooHighException();
    this->grade--;
}

void        Bureaucrat::GradeDecrement()
{
    if(this->grade >= 150)
        throw GradeTooLowException();
    this->grade++;
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
    return os;
}