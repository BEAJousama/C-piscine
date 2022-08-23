/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:42:38 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/23 01:28:38 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
#include <algorithm>
#include <array>

template <typename T> 
typename T::difference_type easyfind(T container, int tofind)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), tofind);
    if (it == container.end())
    {
        std::cerr << "No occurence found !\n";
        return -1;
    }
    return std::distance(container.begin(), it);
};
#endif // !EASYFIND_H
