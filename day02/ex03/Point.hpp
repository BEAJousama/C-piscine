/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:21:46 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/27 20:04:09 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_H
# define _POINT_H

#include "Fixed.hpp"

class Point
{
    private:
         Fixed const   x;
         Fixed const   y;
    public:
        Point();
        Point(float const new_x, float const new_y);
        Point(const Point &obj);
        ~Point();
        Point& operator=(const Point  &obj);
        float get_x() const;
        float get_y() const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif