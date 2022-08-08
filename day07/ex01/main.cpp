/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:12:19 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/08 15:36:07 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"

template <typename T> void iter(T tab[], int size, void (*func) (T*))
{
    for(int i = 0; i < size; i++)
        func(&tab[i]);
}

template <typename T>
void multiply_2(T *a)
{
    *a *= 2;
}

template <typename T>
void add_2(T *a)
{
    *a += 2;
}

template <typename T>
void div_2(T *a)
{
    *a /= 2;
}

template <typename T>
void sub_2(T *a)
{
    *a -= 2;
}

int main()
{
    int tab[3] = {1 , 2 , 3};
    float tab1[5] = {1,2,3,4,5};
    
    iter<int>(tab, 3, &multiply_2<int>);
    iter<int>(tab, 3, &add_2<int>);
    iter<int>(tab, 3, &div_2<int>);
    iter<int>(tab, 3, &sub_2<int>);
    for(int i = 0; i < 3 ; i++)
        std::cout <<tab[i]<< std::endl;
    std::cout <<"-------------------------------\n";
    iter<float>(tab1, 5, &div_2<float>);
    iter<float>(tab1, 5, &add_2<float>);
    iter<float>(tab1, 5, &multiply_2<float>);
    iter<float>(tab1, 5, &sub_2<float>);
    for(int i = 0; i < 5 ; i++)
        std::cout <<tab1[i]<< std::endl;
}   