/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:42:17 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/02 12:40:39 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
# include <iostream>
# include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal &obj);
        WrongAnimal& operator=(const WrongAnimal &obj);
        virtual void  makeSound()const;
        virtual std::string getType()const;
};

#endif