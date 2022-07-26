/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:05:10 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/26 19:09:01 by obeaj            ###   ########.fr       */
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

void        Bureaucrat::signForm(Form &f)
{
    if (f.isItSigned())
        std::cout << this->getName() << " Signed " << f.getName() << std::endl;
    else
    {
        std::cout << this->getName() <<" couldn’t sign " << f.getName() << " because of his low grade\n";
    }
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
    return os;
}