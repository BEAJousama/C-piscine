/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 11:54:25 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/07 13:33:54 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"

int main()
{
    Data *p = new Data();
    Data *n;
    int *i;
    
    uintptr_t ptr(serialize(p));
    
    p->val = 1337;
    p->str = "Future is loading !";
    
    std::cout << "--------------------------\n";
    
    std::cout << p << std::endl;
    std::cout << ptr << std::endl;
    
    std::cout << "--------------------------\n";
    
    n = deserialize(ptr);
    
    i = reinterpret_cast<int *>(ptr);
    std::cout << i << std::endl;
    std::cout << *i << std::endl;
    
    std::cout << "--------------------------\n";
    
    std::cout << n << std::endl;
    std::cout<< n->val << " , " << n->str << std::endl;
    delete p;
}