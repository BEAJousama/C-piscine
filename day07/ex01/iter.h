/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:06:39 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/08 15:29:34 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H
#include <iostream>

template <typename T> void iter(T tab[], int size, void (*func) (T*));
template <typename T> void multiply_2(T *a);
template <typename T> void add_2(T *a);
template <typename T> void sub_2(T *a);
template <typename T> void div_2(T *a);

#endif