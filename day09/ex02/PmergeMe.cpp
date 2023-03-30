/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:16:20 by obeaj             #+#    #+#             */
/*   Updated: 2023/03/28 16:05:17 by obeaj            ###   ########.fr       */
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

PmergeMe& PmergeMe::operator=(PmergeMe const & rhs)
{
    if (this != &rhs)
    {
        this->data1 = rhs.data1;
        this->data2 = rhs.data2;
    }
    return (*this);
}

void PmergeMe::setData(std::vector<int> args)
{
    this->data1.insert(this->data1.begin(), args.begin(), args.end());
    this->data2.insert(this->data2.begin(), args.begin(), args.end());
    return ;
}

void PmergeMe::setDataSize(size_t size)
{
    this->data_size = size;
    return ;
}

void PmergeMe::sortContainers()
{
    std::cout << "Before:  ";
    printContainer(this->data1);
    clock_t begin = clock();
    this->data1 = mergeSort(this->data1);
    clock_t end = clock();
    std::cout << "After:   ";
    printContainer(this->data1);
    std::cout << "Time to process a range of " << data1.size() << " elements with std::vector : " << (static_cast<double>(end - begin) / CLOCKS_PER_SEC) * 1000 << " ms" << std::endl;
    begin = clock();
    this->data2 = mergeSort(this->data2);
    end = clock();
    std::cout << "Time to process a range of " << data1.size() << " elements with std::deque : " << (static_cast<double>(end - begin) / CLOCKS_PER_SEC) * 1000  << " ms" <<  std::endl;
    // std::cout << std::is_sorted(data1.begin(), data1.end()) << std::endl;
    // std::cout << std::is_sorted(data2.begin(), data2.end()) << std::endl;
    return ;
}
