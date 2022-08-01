/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:05:14 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/01 13:15:42 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
# include <string>
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string name;
        int grade;
    public:
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return("Grade is less than 1 !");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return("Grade is more than 150 !");
                }
        };
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(std::string name , int grade);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat& operator=(const Bureaucrat &obj);
        
        std::string getName() const;
        int         getGrade() const;
        void        GradeIncrement();
        void        GradeDecrement();
        void        signForm(Form &f);
        void        executeForm(Form const & form);
};
std::ostream& operator<<(std::ostream& os, Bureaucrat& obj);
#endif