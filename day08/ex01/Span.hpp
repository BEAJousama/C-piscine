/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:58:56 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/10 12:44:35 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <exception>
# include <list>
# include <vector>

class Span
{
	public:
		class SpanFilledException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		Span();
		Span( Span const & src );
		~Span();
		Span( unsigned int N );
		Span &				operator=( Span const & rhs );
		void 				addNumber(int n);
		std::vector<int>	getVector(void) const;
		int shortestSpan() ;
		int longestSpan() ;
	private:
		unsigned int N;
		std::vector<int> vec;
		int index;
};

template <typename T> 
void rangeFun(T cont, Span* sp)
{
	typename T::iterator it;
	for (it = cont.begin(); it <= cont.end(); it++)
	{
		sp->addNumber(*it);
	}
}
#endif /* ************************************************************ SPAN_H */