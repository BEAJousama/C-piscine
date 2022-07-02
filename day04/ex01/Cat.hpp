/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:21:23 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/02 12:55:09 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"
class Brain;

class Cat : public virtual Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat &obj);
        Cat& operator=(const Cat &obj);
        void makeSound() const;
};

#endif