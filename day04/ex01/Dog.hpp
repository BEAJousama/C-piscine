/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:22:19 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/13 18:05:19 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
#include "Animal.hpp"

class Dog : public virtual Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &obj);
        Dog& operator=(const Dog &obj);
        void makeSound() const;
        Brain *getBrain() const;
        void   setBrain(Brain *b);
};

#endif