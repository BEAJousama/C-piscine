/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:05:14 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/07 11:58:18 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include <stdexcept>

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
        int         getGrade();
        void        GradeIncrement();
        void        GradeDecrement();
};
std::ostream& operator<<(std::ostream& os, Bureaucrat& obj);
#endif