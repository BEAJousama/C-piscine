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
    Cat cat1 = Cat();
    const Animal *animal[10];
    Brain b = Brain() ;

    b.setIdeas("Hello World", 0);
    b.setIdeas("Welcome", 1);
    b.setIdeas("salam", 2);
    b.setIdeas("Marhba", 3);
    b.setIdeas("Bonjouuuur", 4);

    cat1.setBrain(&b);

    std::cout <<"------------------------------- Cat <cat1> Ideas ---------------------------------\n";
    for (int a = 0; a < 5; a++)
    {
        std::cout << cat1.getBrain()->getIdeas(a)<< std::endl;
    }
    std::cout <<"-------------------------------------------------------------------------------\n";

    Cat cat = Cat(cat1);

    std::cout <<"------------------------------- Cat <cat> Ideas -------------------------------\n";
    for (int a = 0; a < 5; a++)
    {
        std::cout << cat.getBrain()->getIdeas(a)<< std::endl;
    }
    std::cout <<"-------------------------------------------------------------------------------\n";

    Brain br = Brain();
    br.setIdeas("cat idea1", 0);
    br.setIdeas("cat idea2", 1);
    br.setIdeas("cat idea3", 2);
    br.setIdeas("cat idea4", 3);
    br.setIdeas("cat idea5", 4);
    cat.setBrain(&br);

    std::cout <<"------------------------------- Cat <cat> Ideas -------------------------------\n";
    for (int a = 0; a < 5; a++)
    {
        std::cout << cat.getBrain()->getIdeas(a)<< std::endl;
    }
    
    std::cout <<"------------------------------- Cat <cat1> Ideas ------------------------------\n";
    for (int a = 0; a < 5; a++)
    {
        std::cout << cat1.getBrain()->getIdeas(a)<< std::endl;
    }

    std::cout <<"-------------------------------------------------------------------------------\n";
    for(int index = 0; index < 5 ; index++)
        animal[index] = new Dog();
    std::cout << "---------------------------- Dog sound ---------------------------------------\n";
    for(int index = 0; index < 5 ; index++)
    {
        animal[index]->getType();
        animal[index]->makeSound();
    }
    std::cout <<"-------------------------------------------------------------------------------\n";
    for(int index = 5; index < 10 ; index++)
        animal[index] = new Cat();   
    std::cout << "---------------------------- Cat sound ---------------------------------------\n";
    for(int index = 5; index < 10 ; index++)
    {
        animal[index]->getType();
        animal[index]->makeSound();
    }
    std::cout <<"------------------------------- Destructors -----------------------------------\n";
    delete j;
    delete i;
    for(int index = 0; index < 10; index++)
        delete animal[index];
    return 0;
}
// {
//     // const Animal* meta = new Animal();
//     const WrongAnimal* wrong = new WrongAnimal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     const WrongAnimal* k = new WrongCat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     std::cout << k->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     k->makeSound();
//     // meta->makeSound();
//     wrong->makeSound();
//     // delete meta;
//     delete wrong;
//     delete i;
//     delete j;
//     delete k;
//     return 0;
// }