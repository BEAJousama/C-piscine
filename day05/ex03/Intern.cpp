#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	if ( this == &rhs )
	{
		return *this;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form* Intern::makePresedentialPardonForm(std::string target)
{   
    PresidentialPardonForm *f = new PresidentialPardonForm(target);
    return f;
}

Form* Intern::makeRobotomyRequestForm(std::string target)
{
    RobotomyRequestForm *r = new RobotomyRequestForm(target);
    return(r);
}

Form* Intern::makeShrubberyCreationForm(std::string target)
{
    ShrubberyCreationForm *s = new ShrubberyCreationForm(target);
    return (s);
}

typedef Form* (Intern::*MFORM)(std::string target);

Form* Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
    MFORM form[3] = {
        &Intern::makePresedentialPardonForm,
        &Intern::makeRobotomyRequestForm,
        &Intern::makeShrubberyCreationForm
    };
    std::string names[3] = {
            "Presedential Pardon",
            "Robotomy Request",
            "Shrubbery Creation"
    };
    while (i < 3)
    {
        if(name == names[i])
        {
            std::cout <<"Intern successfuly creates "<< name << std::endl;
            return ((this->*(form[i]))(target));
        }
        i++;
    }
    std::cout << "Error: " << name << " doesn't exist" << std::endl;
    return(NULL);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */