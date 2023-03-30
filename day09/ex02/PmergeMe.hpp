/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:16:22 by obeaj             #+#    #+#             */
/*   Updated: 2023/03/28 16:01:44 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <vector>
# include <deque>
# include <ctime>
# include <cmath>

class PmergeMe
{
    public:
        typedef std::vector<int>::iterator itvector;
        typedef std::deque<int>::iterator itdeque;
    public:
        PmergeMe();
        PmergeMe(std::vector<int> args);
        PmergeMe(PmergeMe const & src);
        ~PmergeMe();
        PmergeMe& operator=(PmergeMe const & rhs);
        void sortContainers();
        void setData(std::vector<int> args);
        void setDataSize(size_t size);
        
    private:
    
        template <typename T>
        void printContainer(T& data)
        {
            for (size_t i = 0; i < data.size(); i++)
                std::cout << data[i] << " ";
            std::cout << std::endl;
        };
        
        template <typename T>
        T mergeSort(T& data)
        {
            if (data.size() <= std::sqrt(data_size))
                return (insertSort(data));
            T v1;
            T v2;
            size_t i = 0;
            while (i < data.size() / 2)
            {
                v1.push_back(data[i]);
                i++;
            }
            while (i < data.size())
            {
                v2.push_back(data[i]);
                i++;
            }
            v1 = mergeSort(v1);
            v2 = mergeSort(v2);
            return (merge(v1, v2));
        };
        
        template <typename T> 
        T merge(T& v1, T& v2)
        {
            T v3;
            while (!v1.empty() && !v2.empty())
            {
                if (v1.front() < v2.front())
                {
                    v3.push_back(v1.front());
                    v1.erase(v1.begin());
                }
                else
                {
                    v3.push_back(v2.front());
                    v2.erase(v2.begin());
                }
            }
            while (!v1.empty())
            {
                v3.push_back(v1.front());
                v1.erase(v1.begin());
            }
            while (!v2.empty())
            {
                v3.push_back(v2.front());
                v2.erase(v2.begin());
            }
            return (v3);   
        };
        
        template <typename T>
        T& insertSort(T& data)
        {
            size_t i = 1;
            while (i < data.size())
            {
                int j = i;
                while (j > 0 && data[j] < data[j - 1])
                {
                    std::swap(data[j], data[j - 1]);
                    j--;
                }
                i++;
            }
            return (data);
        }

    private:
    
        std::vector<int>    data1;
        std::deque<int>     data2;
        size_t              data_size;
};

#endif