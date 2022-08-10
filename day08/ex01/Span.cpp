/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:59:00 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/10 13:24:32 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int Span::index = 0;
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span( const Span & src )
{
	*this = src;
}

Span::Span(unsigned int N) : index(0)
{
	this->N = N;
	vec.resize(N);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		if(!rhs.vec.empty())
		{
			this->vec = std::vector<int>(rhs.N);
			for (int i = 0; i < static_cast<int>((rhs.vec).size()); i++)
				this->vec.push_back(rhs.vec[i]);
		}
		this->N = rhs.N;
	}
	return *this;
}

/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/
const char* Span::SpanFilledException::what() const throw()
{
	return ("No more space left in the span !\n");
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void Span::addNumber(int n)
{
	try
	{
		vec.at(index++) = n;
	}
	catch(...)
	{
		throw SpanFilledException();
	}
	
}

int Span::shortestSpan()
{
	std::vector<int> v(this->N - 1);
	std::vector<int> v1(this->N - 1);
	
	std::vector<int>::iterator it;
	std::vector<int>::iterator it1;
	int j = 0;
	for(it = vec.begin(); it < vec.end() - 1 ; it++)
	{
		int i = 0;
		v1.resize(N - i - 1);
		for (it1 = it + 1; it1 < vec.end(); it1++)
		{
			v1.at(i) = abs(*it1 - *it);
			i++;
		}
		v.at(j) = static_cast<int>(*std::min_element(v1.begin(), v1.end()));
		j++;
	}
	return (static_cast<int>(*std::min_element(v.begin(), v.end())));
}

int Span::longestSpan()
{
	int max = static_cast<int>(*std::max_element(this->vec.begin(), this->vec.end()));
	int min = static_cast<int>(*std::min_element(this->vec.begin(), this->vec.end()));
	return (max - min);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::vector<int>	Span::getVector(void) const
{
	return this->vec;
}

/* ************************************************************************** */