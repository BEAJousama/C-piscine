/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maindex.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:32:39 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/01 16:46:09 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal *a[10];

    for(int index = 0; index < 5 ; index++)
        a[index] = new Dog();
    for(int index = 5; index < 10 ; index++)
        a[index] = new Cat();   
    delete j;
    delete i;
    for(int index = 0; index < 10; index++)
        delete a[index];
    return 0;
}