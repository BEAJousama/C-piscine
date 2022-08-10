/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:06:39 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/09 14:33:11 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T> void iter(T tab[], int size, void (*func) (T*))
{
    for(int i = 0; i < size; i++)
        func(&tab[i]);
};

template <typename T>
void multiply_2(T *a)
{
    *a *= 2;
};

template <typename T>
void add_2(T *a)
{
    *a += 2;
};

template <typename T>
void div_2(T *a)
{
    *a /= 2;
};

template <typename T>
void sub_2(T *a)
{
    *a -= 2;
};

#endif