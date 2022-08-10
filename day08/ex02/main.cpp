/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:49:20 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/10 16:50:25 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    std::cout << "------------------------------------\n";
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    std::cout << "------------------------------------\n";
    mstack.push(3);
    mstack.push(0);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(144);
  
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << it[3] << std::endl;
    
    std::cout << "----------------Stack iterator---------------\n";
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}