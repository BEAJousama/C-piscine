/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:16:20 by obeaj             #+#    #+#             */
/*   Updated: 2023/03/23 14:32:18 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    return ;
}

PmergeMe::PmergeMe(PmergeMe const & src)
{
    *this = src;
    return ;
}

PmergeMe::PmergeMe(std::vector<int> args)
{
    setData(args);
    return ;
}

PmergeMe::~PmergeMe()
{
    data1.clear();
    data2.clear();
    return ;
}

void PmergeMe::setData(std::vector<int> args)
{
    this->data1.insert(this->data1.begin(), args.begin(), args.end());
    this->data2.insert(this->data2.begin(), args.begin(), args.end());
    return ;
}

void PmergeMe::sortContainers()
{
    printContainer(this->data1);
    this->data1 = mergeSort(this->data1);
    printContainer(this->data1);
    printContainer(this->data2);
    this->data2 = mergeSort(this->data2);
    printContainer(this->data2);
    return ;
}

PmergeMe& PmergeMe::operator=(PmergeMe const & rhs)
{
    if (this != &rhs)
    {
        this->data1 = rhs.data1;
        this->data2 = rhs.data2;
    }
    return (*this);
}

