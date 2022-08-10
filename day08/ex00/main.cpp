/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:00:43 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/10 18:44:23 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::list<int> lst;
    lst.push_back(8);
    lst.push_back(2);
    lst.push_back(9);
    lst.push_back(6);
    lst.push_back(9);
    lst.push_back(5);
    
    std::list<int>::difference_type it;

    it = easyfind<std::list<int> >(lst, 5);
    if (it != -1)
        std::cout << "First occurence at index " << it << std::endl;
    it = easyfind<std::list<int> >(lst, 2);
    if (it != -1)
        std::cout << "First occurence at index " << it << std::endl;
    it = easyfind<std::list<int> >(lst, 22);
    if (it != -1)
        std::cout << "First occurence at index " << it << std::endl;
    it = easyfind<std::list<int> >(lst, 9);
    if (it != -1)
        std::cout << "First occurence at index " << it << std::endl;
    it = easyfind<std::list<int> >(lst, -1);
    if (it != -1)
        std::cout << "First occurence at index " << it << std::endl;
    it = easyfind<std::list<int> >(lst, 6);
    if (it != -1)
        std::cout << "First occurence at index " << it << std::endl;
    return 0;
}