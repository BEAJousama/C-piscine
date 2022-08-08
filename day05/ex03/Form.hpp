/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:10:58 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/08 18:46:42 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	
	public:
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		Form();
		Form( Form const & src );
		~Form();
		Form(std::string name, int gradToSign, int gradToExec);
		std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		bool isItSigned() const;
		void setTosigned(bool isSigned);
		void beSigned(Bureaucrat &b);
		Form &		operator=( Form const & rhs );
		std::string getTarget() const;
		void 		setTarget(std::string target);
		void execute(Bureaucrat const & executor) const ;
		virtual void action() const = 0;

	protected:
		std::string 		target;
		const std::string 	name;
		const int	 		gradToSign;
		const int			gradToExec;
		bool 				isSigned;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */