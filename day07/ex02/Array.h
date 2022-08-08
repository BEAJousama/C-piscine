/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:41:48 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/08 17:28:07 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <exception>

template <typename T>
class Array
{
    private:
        T *ptr;
        unsigned int lenght;
    public:
        class InvalidIndexException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        Array();
        Array(unsigned int n);
        Array(Array const &obj);
        Array& operator=(Array const &obj);
        T& operator[](int i) const;
        unsigned int size() const;
};

#endif