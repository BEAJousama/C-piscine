/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:32:49 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/12 16:33:43 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(Point const a, Point const b, Point const c)
{
    if ((a.get_x()*(b.get_y() - c.get_y()) + b.get_x()*(c.get_y() - a.get_y()) + c.get_x()*(a.get_y() - b.get_y()))/Fixed(2) < Fixed(-1))
        return ((a.get_x()*(b.get_y() - c.get_y()) + b.get_x()*(c.get_y() - a.get_y()) + c.get_x()*(a.get_y() - b.get_y()))/Fixed(2)) * Fixed(-1);
    return (a.get_x()*(b.get_y() - c.get_y()) + b.get_x()*(c.get_y() - a.get_y()) + c.get_x()*(a.get_y() - b.get_y()))/Fixed(2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed A = area(a, b, c);
    Fixed A1 = area(point, b, c); 
    Fixed A2 = area(point, a, c); 
    Fixed A3 = area(point, a, b);

    return (A == A1 + A2 + A3);
}