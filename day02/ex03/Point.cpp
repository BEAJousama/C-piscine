/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:21:43 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/27 20:00:06 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(Fixed(0)) , y(Fixed(0))
{
}

Point::Point(float const new_x, float const new_y): x(Fixed(new_x)) , y(Fixed(new_y))
{
}

Point::Point(const Point &obj)
{
    *this = obj;
}

Point::~Point()
{
    
}

Point& Point::operator=(const Point& obj)
{
    this->~Point();
    new (this) Point(obj.x.toFloat(), obj.y.toFloat());
    return *this;
}

float Point::get_x() const
{
    float x = this->x.toFloat();
    return x;
}

float Point::get_y() const
{
    float y = this->y.toFloat();
    return y;
}