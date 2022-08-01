#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"


class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();
		Intern &		operator=( Intern const & rhs );
		Form &makePresedentialPardonForm(std::string target);
		Form &makeRobotomyRequestForm(std::string target);
		Form &makeShrubberyCreationForm(std::string target);
		Form* makeForm(std::string name, std::string target);

	private:

};
#endif /* ********************************************************** INTERN_H */