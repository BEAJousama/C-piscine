/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:28:31 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/07 15:55:38 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.h"
#include <ctime>

Base * generate(void)
{
    srand((time(0) + 1000));
    int r = (rand() % 3) + 1;
    std::cout << r<<std::endl;
    switch(r)
    {
        case 1:
            return (new A());
        case 2:
            return (new B());
        default:
            return(new C());
    }
    return NULL;
}

void identify(Base* p)
{
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);
    
    if(a != nullptr)
    {
        std::cout<< "p type is : A pointer\n" ;
    }
    else if(b != nullptr)
    {
        std::cout<< "p type is : B pointer\n" ;
    }
    else if(c != nullptr)
    {
        std::cout<< "p type is : C pointer\n" ;
    }
}

void identify(Base& p)
{
    try
    {
        A a = dynamic_cast<A&>(p);
        std::cout<< "p type is : A pointer\n" ;
        return ;
    }
    catch(...)
    {
        // std::cerr << e.what() << '\n';
        try
        {
            B b = dynamic_cast<B&>(p);
            std::cout<< "p type is : B pointer\n" ;
            return ;
        }
        catch(...)
        {
            // std::cerr << e.what() << '\n';
                try
                {
                    C c = dynamic_cast<C&>(p);
                    std::cout<< "p type is : C pointer\n" ;
                    return ;
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                    return ;
                }
        }
    }
    
}