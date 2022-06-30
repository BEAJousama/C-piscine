/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:22:19 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/30 23:29:14 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
#include "Animal.hpp"

class Dog : public Animal
{
    protected:
        std::string type;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &obj)
        Dog& operator=(const Dog &obj);
        std::string getType();
        void makeSound();
        
}

#endif