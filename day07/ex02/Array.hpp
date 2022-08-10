/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:41:48 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/09 14:32:20 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
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
                virtual const char* what() const throw()
                {
                    return("Invalid index !");
                };
        };
        Array() : lenght(0)
        {
            this->ptr = new T[0];
        };
        Array(unsigned int n)
        {
            this-> lenght = n;
            this->ptr = new T[n];
        };
        Array(Array const &obj)
        {
            this->ptr = nullptr;
            *this = obj;
        };
        Array& operator=(Array const &obj)
        {
            if(this == &obj)
                return *this;
            delete [] ptr;
            this->lenght = obj.lenght;
            if (obj.ptr)
            {
                this->ptr = new T[lenght];
                for(unsigned int i = 0; i < lenght; i++)
                    this->ptr[i] = obj.ptr[i];
            }
            else
                this->ptr = nullptr;
            return *this;
        };
        T& operator[](int i) const
        {
            if (i < static_cast<int>(lenght) && i >= 0)
                return ptr[i];
            else
                throw InvalidIndexException();
        };
        unsigned int size() const
        {
            return this->lenght;
        };
};

#endif