/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:05:17 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/27 12:11:43 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("bureaucrat_1", 10);
        Bureaucrat c = a;
        Form form("Form1", 11, 116);
        std::cout << form;
        form.beSigned(c);
        c.signForm(form);
        std::cout << form;
        std::cout << c;
        a.GradeDecrement();
        form.beSigned(a);
        a.signForm(form);
        std::cout << a;
    }
    catch (std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat d("bureaucrat_2", 150);
        Form form("Form2", 160, 150);
        std::cout << form;
        form.beSigned(d);
        d.signForm(form);
        std::cout << d;
        d.GradeDecrement();
        form.beSigned(d);
        d.signForm(form);
        std::cout << d;
    }
    catch (std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}