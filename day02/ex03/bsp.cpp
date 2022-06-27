/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:32:49 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/27 20:00:37 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(Point const a, Point const b, Point const c)
{
   
   return abs((a.get_x()*(b.get_y() - c.get_y()) + b.get_x()*(c.get_y() - a.get_y()) + c.get_x()*(a.get_y() - b.get_y()))/2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float A = area(a, b, c);
    float A1 = area(point, b, c); 
    float A2 = area(point, a, c); 
    float A3 = area(point, a, b);

    return (A == A1 + A2 + A3);
}