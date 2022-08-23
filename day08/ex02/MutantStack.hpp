/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:27:22 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/18 08:40:57 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK__H__
#define __MUTANTSTACK__H__
#include <iostream>
#include <stack>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        // typedef T ValueType;
        // typedef StackIterator<MutantStack<T> > iterator;
        typedef typename std::stack<T, Container>::container_type::iterator iterator;
    public:
        MutantStack(){};
        ~MutantStack(){};
        iterator begin()
        {
            // return iterator(&this->top() - this->size() + 1);
            return std::begin(this->c);
        }
        iterator end()
        {
            // return iterator(&this->top() + 1);
            return std::end(this->c);
        }       
};

/*
template<typename MutantStack>
class StackIterator
{
    public:
        typedef typename MutantStack::ValueType ValueType;
        typedef ValueType* PointerType;
        typedef ValueType& ReferenceType;
    public:
        StackIterator(PointerType ptr):m_ptr(ptr){};

        StackIterator& operator++()
        {
            m_ptr++;
            return *this;
        };
        StackIterator& operator++(int)
        {
            StackIterator it = this;
            m_ptr++;
            return it;
        };
        StackIterator& operator--()
        {
            m_ptr--;
            return *this;
        };
        StackIterator& operator--(int)
        {
            StackIterator it = this;
            m_ptr--;
            return it;
        };
        bool operator==(StackIterator &it) const
        {
            return (this->m_ptr == it.m_ptr);
        };
        bool operator<=(StackIterator &it) const
        {
            return (this->m_ptr <= it.m_ptr);
        };
        bool operator>=(StackIterator &it) const 
        {
            return (this->m_ptr >= it.m_ptr);
        };
        bool operator>(StackIterator &it) const
        {
            return (this->m_ptr > it.m_ptr);
        };
        bool operator<(StackIterator &it) const
        {
            return (this->m_ptr < it.m_ptr);
        };
        bool operator!=(StackIterator &it) const
        {
            return !(this->m_ptr == it.m_ptr);
        };
        ReferenceType operator*() const
        {
            return *m_ptr;
        };
        ReferenceType operator[](ValueType i) const
        {
            return *(m_ptr + i);
        };
        
        PointerType operator->() const
        {
            return (&(operator*()));
        };
        
        PointerType operator+=(ValueType i) const
        {
            return (m_ptr + i);
        };
        
    private:
        PointerType m_ptr;
};
*/


#endif  //!__MUTANTSTACK__H__