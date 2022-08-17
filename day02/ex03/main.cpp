/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:33:07 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/12 16:40:18 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


int main( void ) {
    Point a(1, 1);
    Point b(1, 4);
    Point c(4, 1);
    
    Fixed f(4);
    f++;
    std::cout << f << std::endl;
    
    Point p(1, 4.00391);
    Point p1(1,4);
    Point p2(1,2);
    
    std::cout << std::boolalpha;
    std::cout << bsp(a,b,c,p) << std::endl;
    std::cout << bsp(a,b,c,p1) << std::endl;
    std::cout << bsp(a,b,c,p2) << std::endl;
    return 0;
}