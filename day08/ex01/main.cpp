/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:41:02 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/10 12:37:18 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

    srand(time(0));
    std::vector<int> vct(10);
    std::generate(vct.begin(), vct.end(), rand);
    Span sp1 = Span(10);
    try
    {
        rangeFun<std::vector<int> >(vct, &sp1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << sp1.longestSpan() << std::endl;
    std::cout << sp1.shortestSpan() << std::endl;
    
    std::cout << "--------------------------------------------------------\n";
    
    Span sp = Span(5);
    try
    {
        sp.addNumber(6);
        sp.addNumber(4);
        sp.addNumber(18);
        sp.addNumber(9);
        sp.addNumber(17);
        sp.addNumber(17);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() ;
    }

    std::cout << sp.longestSpan() << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    
    std::cout << "--------------------------------------------------------\n";
    
    std::vector<int> vec = sp.getVector();
    std::vector<int> vec1 = vec;

    vec[0] = 12;
    
    std::cout << vec1[0] << std::endl;

    return 0;
}